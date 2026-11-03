import oracledb from "oracledb";
import "dotenv/config";

/**
 * 🔹 CARREGAMENTO DAS VARIÁVEIS DE AMBIENTE (.env)
 * ------------------------------------------------
 * Aqui estamos lendo as credenciais do banco (usuário, senha, host, serviço)
 * de variáveis de ambiente. Essa prática é importante para **não deixar senhas
 * expostas** dentro do código-fonte.
 */
const {
  ORACLE_HOST,
  ORACLE_PORT,
  ORACLE_SERVICE,
  ORACLE_USER,
  ORACLE_PASSWORD
} = process.env;

/**
 * STRING DE CONEXÃO (HOST:PORTA/SERVIÇO)
 * -----------------------------------------
 * O Oracle identifica cada banco pelo SERVICE_NAME (ou SID).
 * Exemplo: localhost:1521/XEPDB1
 * 
 * Essa string é usada pelo driver para estabelecer a conexão.
 */
const connectString = `${ORACLE_HOST}:${ORACLE_PORT}/${ORACLE_SERVICE}`;

/**
 * FORMATO DE SAÍDA DOS SELECTs
 * -------------------------------
 * Por padrão, o Oracle retorna as linhas como arrays (["JOÃO", 20, 101]).
 * Ao definir `OUT_FORMAT_OBJECT`, cada linha passa a ser um OBJETO JS:
 * { NOME: "JOÃO", IDADE: 20, RA: 101 }
 * 
 * Isso facilita o uso e integração com APIs e front-ends (JSON direto).
 */
oracledb.outFormat = oracledb.OUT_FORMAT_OBJECT;

/**
 * FUNÇÃO initPool()
 * --------------------
 * Cria o **pool de conexões** do Oracle. O pool é um conjunto de conexões
 * já abertas e reutilizáveis — evita criar e destruir conexão a cada requisição.
 * 
 * Configurações principais:
 *  - user/password: credenciais do banco
 *  - connectString: host/porta/serviço
 *  - poolMin: número mínimo de conexões vivas
 *  - poolMax: número máximo permitido
 *  - poolIncrement: quantas conexões criar de cada vez se precisar mais
 * 
 * O `await` é importante: só seguimos com o servidor após o pool estar ativo.
 */
export async function initPool() {
  await oracledb.createPool({
    user: ORACLE_USER,
    password: ORACLE_PASSWORD,
    connectString,
    poolMin: 1,       // mínimo de conexões mantidas ativas
    poolMax: 10,      // máximo permitido simultaneamente
    poolIncrement: 1  // crescimento gradual conforme a demanda
  });
}

/**
 * FUNÇÃO getConn()
 * -------------------
 * Retorna uma conexão ativa do pool para ser usada em um endpoint (rota).
 * Cada rota faz:
 *   1. `const conn = await getConn()` → obtém a conexão
 *   2. `await conn.execute(...)` → executa SQL
 *   3. `await conn.close()` → devolve a conexão ao pool
 * 
 * Isso garante que múltiplas requisições possam compartilhar as mesmas
 * conexões sem sobrecarregar o Oracle.
 */
export async function getConn() {
  return oracledb.getPool().getConnection();
}

/**
 * FUNÇÃO closePool()
 * ---------------------
 * Fecha o pool de conexões ao encerrar a aplicação.
 * O parâmetro (10) indica tempo máximo em segundos para aguardar conexões
 * ainda sendo usadas antes de fechar.
 * 
 * Caso o pool ainda não tenha sido criado, o `try/catch` evita erro.
 * 
 * Boa prática: chamar essa função dentro dos eventos "SIGINT" e "SIGTERM"
 * (Ctrl+C ou desligamento do servidor) para encerrar o app com segurança.
 */
export async function closePool() {
  try {
    await oracledb.getPool().close(10);
  } catch { 
    /* pool pode não existir, ignore */
  }
}