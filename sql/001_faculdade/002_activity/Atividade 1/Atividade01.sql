-- 2) Criar tabela funcionarios
CREATE TABLE funcionarios (
	id INT PRIMARY KEY AUTO_INCREMENT ,
	nome VARCHAR(100) NOT NULL ,
	cargo VARCHAR(50) DEFAULT 'Estagiário' ,
	salario DECIMAL(10,2) CHECK(salario > 0)
);

INSERT INTO funcionarios (nome, cargo, salario)
VALUES 
('Cleber do grau', 'Chefe', 10000.00),
('Rogerio do gás', 'Funcionario', 5000.00);

-- 3) Adicione a coluna data_admissao (tipo DATE, não nulo)
ALTER TABLE funcionarios
ADD COLUMN data_admissao DATE;

UPDATE funcionarios 
SET data_admissao = '2025-01-01';

ALTER TABLE funcionarios
MODIFY COLUMN data_admissao DATE NOT NULL;

INSERT INTO funcionarios (nome, cargo, salario, data_admissao)
VALUES 
('Valdeci', 'Funcionario', 2000.00, '2026-02-01'),
('Joao do piseiro', 'Gerente', 15000.00, '2026-02-01');

-- 4 Remova a coluna cargo da tabela funcionarios.
ALTER TABLE funcionarios
DROP COLUMN cargo;

INSERT INTO funcionarios (nome, salario, data_admissao)
VALUES 
('Cleiton Rasta', 5000.00, '2026-02-01'),
('Aldimir', 15000.00, '2026-02-01');


-- 5) Altere a coluna salario da tabela funcionarios para o tipo DECIMAL(12,2).
ALTER TABLE funcionarios
MODIFY salario DECIMAL(12,2);

INSERT INTO funcionarios (nome, salario, data_admissao)
VALUES 
('Rogerio do gás junior',2000.00, '2026-02-01'),
('Aldimir Junior', 15000.00, '2026-02-01');


-- 6) Crie uma tabela chamada departamentos com os campos
CREATE TABLE departamentos (
	id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
	nome VARCHAR(100) NOT NULL
);

INSERT INTO departamentos (nome)
VALUES 
('Financeiro'),
('Marketing');

ALTER TABLE funcionarios
ADD COLUMN departamento_id INT;

UPDATE funcionarios
SET departamento_id = 1;

ALTER TABLE funcionarios
MODIFY departamento_id INT NOT NULL;

ALTER TABLE funcionarios
ADD CONSTRAINT fk_departamento
FOREIGN KEY (departamento_id)
REFERENCES departamentos(id);

INSERT INTO funcionarios (nome, salario, data_admissao, departamento_id)
VALUES 
('Rogerio do gás junior',2000.00, '2026-02-01',2),
('Aldimir Junior', 15000.00, '2026-02-01', 1);

SELECT * from funcionarios;

-- 7) Adicione uma coluna chamada orcamento do tipo DECIMAL(12,2)

ALTER TABLE departamentos
ADD COLUMN orcamento DECIMAL(12,2);

UPDATE departamentos
SET orcamento = 10000.00;

INSERT INTO departamentos (nome, orcamento)
VALUES 
('RH', 80000.00),
('TI', 120000.00);


-- 8) Remova a coluna orcamento da tabela departamentos.
ALTER TABLE departamentos
DROP COLUMN orcamento;

INSERT INTO departamentos (nome)
VALUES 
('Alguma coisa'),
('Outra coisa');

-- 9) Altere a coluna nome da tabela departamentos para VARCHAR(150)
ALTER TABLE departamentos
MODIFY nome VARCHAR(150);

INSERT INTO departamentos (nome)
VALUES 
('Departamento de departamentos'),
('Departamento que cuida muito bem dos funcionarios');

-- 10) Renomeie a tabela departamentos para setores.
RENAME TABLE departamentos TO setores;

INSERT INTO setores (nome)
VALUES 
('Setor muito top'),
('Setor mais top que o setor muito top');

-- 11) Remova a tabela setores (antiga departamentos) do banco de dados
ALTER TABLE funcionarios
DROP FOREIGN KEY fk_departamento;

ALTER TABLE funcionarios
DROP COLUMN departamento_id;
DROP TABLE setores;

-- 12) Adicione uma coluna chamada status do tipo VARCHAR(20)
ALTER TABLE funcionarios
ADD COLUMN status VARCHAR(20) DEFAULT 'Ativo';

INSERT INTO funcionarios (nome, salario, data_admissao, status)
VALUES 
('Jose Josefino', 3000.00, '2026-02-01', 'Inativo'),
('Otaldo da Silva', 4000.00, '2026-02-01', 'Ativo');