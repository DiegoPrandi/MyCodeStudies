use BD12022667;

-- 2
CREATE TABLE funcionarios (
id INT PRIMARY KEY AUTO_INCREMENT ,
nome VARCHAR(100) NOT NULL ,
cargo VARCHAR(50) DEFAULT 'Estagiário' ,
salario DECIMAL(10,2) CHECK(salario > 0)
);
INSERT INTO funcionarios (nome, cargo, salario)
VALUES ('Cleber do grau', 'Chefe', 10.000),
	   ('Rogerio do gás', 'Funcionario', 5.000);


-- 3 Adicione a coluna data_admissao (tipo DATE, não nulo)
ALTER TABLE funcionarios
ADD COLUMN data_admissao DATE;

update funcionarios set data_admissao = '2025-01-01';



ALTER TABLE funcionarios
MODIFY COLUMN data_admissao DATE NOT NULL;
INSERT INTO funcionarios (nome, cargo, salario, data_admissao)
VALUES ('Valdeci', 'Funcionario', 2.000, '2026-02-01'),
	   ('Joao do piseiro', 'Gerente', 15.000, '2026-02-01');
       
-- 4 Remova a coluna cargo da tabela funcionarios.

ALTER TABLE funcionarios
DROP COLUMN cargo;

INSERT INTO funcionarios (nome, salario, data_admissao)
VALUES ('Cleiton', 5.000, '2026-02-01'),
	   ('Aldimir', 15.000, '2026-02-01');
       
-- 5) Altere a coluna salario da tabela funcionarios para o tipo DECIMAL(12,2).
ALTER TABLE funcionarios
MODIFY COLUMN salario DECIMAL(12,2);
INSERT INTO funcionarios (nome, salario, data_admissao)
VALUES ('Rogerio do gás junior',2.000, '2026-02-01'),
	   ('Aldimir Junior', 15.000, '2026-02-01');
       
-- 6) Crie uma tabela chamada departamentos com os campos
CREATE TABLE departamentos (
id INT PRIMARY KEY AUTO_INCREMENT NOT NULL,
nome VARCHAR(100) NOT NULL
);

INSERT INTO departamentos (nome)
VALUES ('Abacaxi'),
		('Banana');

ALTER TABLE funcionarios
ADD COLUMN departamento_id INT;
ALTER TABLE funcionarios
ADD FOREIGN KEY (departamento_id) references departamentos(id);
INSERT INTO funcionarios (nome, salario, data_admissao, departamento_id)
VALUES ('Rogerio do gás junior',2.000, '2026-02-01',2),
	   ('Aldimir Junior', 15.000, '2026-02-01', 1);

SELECT * FROM funcionarios;