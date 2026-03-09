SHOW DATABASES;
USE BD12022667;

CREATE TABLE departamentos (
id INT PRIMARY KEY AUTO_INCREMENT ,
nome VARCHAR(100) NOT NULL
);

ALTER TABLE funcionarios
    ADD COLUMN departamento_id INT,
    ADD FOREIGN KEY (departamento_id)
    REFERENCES departamentos(id);
    
select * from funcionarios;
select * from departamentos;

INSERT INTO funcionarios (nome, cargo, salario, email, telefone)
VALUES ("AI 2", "prefeito", 1500, "AI@GMAIL.COM", "19923", 1);

ALTER TABLE departamentos
ADD COLUMN orcamento DECIMAL(12,2);

ALTER TABLE departamentos
DROP COLUMN orcamento;

ALTER TABLE departamentos
MODIFY COLUMN nome VARCHAR(150);

ALTER TABLE departamentos
RENAME TO setores;

DROP TABLE setores;


ALTER TABLE funcionarios
ADD COLUMN status VARCHAR(20) DEFAULT 'Ativo';

SHOW TABLES;

SELECT * FROM funcionarios;