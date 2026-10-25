/*
  Arquivo: alunos-lista.js
  Responsabilidade: controlar a página listar-alunos.html.

  Funções principais:
  - carregar alunos
  - renderizar tabela
  - aplicar filtro
  - abrir modal de detalhes
  - abrir modal de inativação
*/

let raSelecionadoParaInativar = null;

async function carregarAlunos() {
    try {
        exibirMensagemLista('info', 'Carregando alunos...');

        const alunos = await listarAlunosApi();

        renderizarTabela(alunos);
        atualizarCardsResumo(alunos);

        exibirMensagemLista('success', 'Alunos carregados com sucesso.');
    } catch (erro) {
        exibirMensagemLista('danger', erro.message);
    }
}

async function aplicarFiltroSituacao() {
    try {
        const campoFiltro = document.getElementById('filtroSituacao');
        const situacao = campoFiltro.value;

        const alunosFiltrados = await listarAlunosApi(situacao);

        renderizarTabela(alunosFiltrados);

        /*
      Aqui eu atualizo os cards com base no resultado filtrado.
      Se quiser que os cards sempre mostrem o total geral,
      basta chamar listarAlunosApi() sem filtro e atualizar os cards com esse resultado.
    */
        atualizarCardsResumo(alunosFiltrados);

        if (situacao) {
            exibirMensagemLista('success', `Filtro aplicado: ${situacao}.`);
        } else {
            exibirMensagemLista('success', 'Todos os alunos foram carregados.');
        }
    } catch (erro) {
        exibirMensagemLista('danger', erro.message);
    }
}

function limparFiltro() {
    const campoFiltro = document.getElementById('filtroSituacao');
    campoFiltro.value = '';

    carregarAlunos();
}

function renderizarTabela(alunos) {
    const tabela = document.getElementById('tabelaAlunos');

    tabela.innerHTML = '';

    if (!alunos || alunos.length === 0) {
        tabela.innerHTML = `
      <tr>
        <td colspan="7" class="text-center text-muted py-4">
          Nenhum aluno encontrado.
        </td>
      </tr>
    `;
        return;
    }

    alunos.forEach((aluno) => {
        tabela.innerHTML += `
      <tr>
        <td>${aluno.ra}</td>
        <td>${aluno.nome}</td>
        <td>${aluno.email}</td>
        <td>${aluno.curso}</td>
        <td>${aluno.semestre}</td>
        <td>${criarBadgeSituacao(aluno.situacao)}</td>
        <td>
          <div class="d-flex gap-2 flex-wrap">
            <button class="btn btn-sm btn-outline-primary" onclick="abrirModalDetalhes(${aluno.ra})">
              Ver
            </button>

            <a class="btn btn-sm btn-outline-success" href="manipular-aluno.html?ra=${aluno.ra}">
              Editar
            </a>

            <button class="btn btn-sm btn-outline-danger" onclick="abrirModalInativar(${aluno.ra})">
              Inativar
            </button>
          </div>
        </td>
      </tr>
    `;
    });
}

function atualizarCardsResumo(alunos) {
    const total = alunos.length;

    const ativos = alunos.filter((aluno) => aluno.situacao === 'Ativo').length;
    const formados = alunos.filter((aluno) => aluno.situacao === 'Formado').length;
    const inativos = alunos.filter((aluno) => aluno.situacao === 'Inativo').length;

    document.getElementById('cardTotal').innerText = total;
    document.getElementById('cardAtivos').innerText = ativos;
    document.getElementById('cardFormados').innerText = formados;
    document.getElementById('cardInativos').innerText = inativos;
}

function criarBadgeSituacao(situacao) {
    if (situacao === 'Ativo') {
        return `<span class="badge text-bg-success">Ativo</span>`;
    }

    if (situacao === 'Trancado') {
        return `<span class="badge text-bg-warning">Trancado</span>`;
    }

    if (situacao === 'Formado') {
        return `<span class="badge text-bg-primary">Formado</span>`;
    }

    if (situacao === 'Inativo') {
        return `<span class="badge text-bg-secondary">Inativo</span>`;
    }

    return `<span class="badge text-bg-light">${situacao}</span>`;
}

async function abrirModalDetalhes(ra) {
    try {
        const aluno = await buscarAlunoApi(ra);

        document.getElementById('modalRa').innerText = aluno.ra;
        document.getElementById('modalNome').innerText = aluno.nome;
        document.getElementById('modalEmail').innerText = aluno.email;
        document.getElementById('modalCurso').innerText = aluno.curso;
        document.getElementById('modalSemestre').innerText = aluno.semestre;
        document.getElementById('modalSituacao').innerHTML = criarBadgeSituacao(aluno.situacao);

        document.getElementById('modalLinkEditar').href = `manipular-aluno.html?ra=${aluno.ra}`;

        const elementoModal = document.getElementById('modalDetalhesAluno');
        const modal = new bootstrap.Modal(elementoModal);

        modal.show();
    } catch (erro) {
        exibirMensagemLista('danger', erro.message);
    }
}

function abrirModalInativar(ra) {
    raSelecionadoParaInativar = ra;

    document.getElementById('raInativacao').innerText = ra;

    const elementoModal = document.getElementById('modalInativarAluno');
    const modal = new bootstrap.Modal(elementoModal);

    modal.show();
}

async function confirmarInativacao() {
    try {
        if (!raSelecionadoParaInativar) {
            exibirMensagemLista('warning', 'Nenhum aluno foi selecionado para inativação.');
            return;
        }

        await inativarAlunoApi(raSelecionadoParaInativar);

        const elementoModal = document.getElementById('modalInativarAluno');
        const modal = bootstrap.Modal.getInstance(elementoModal);

        if (modal) {
            modal.hide();
        }

        raSelecionadoParaInativar = null;

        exibirMensagemLista('success', 'Aluno inativado com sucesso.');

        carregarAlunos();
    } catch (erro) {
        exibirMensagemLista('danger', erro.message);
    }
}

function exibirMensagemLista(tipo, mensagem) {
    const areaMensagem = document.getElementById('areaMensagem');

    areaMensagem.className = `alert alert-${tipo}`;
    areaMensagem.innerHTML = mensagem;
}

window.addEventListener('DOMContentLoaded', carregarAlunos);
