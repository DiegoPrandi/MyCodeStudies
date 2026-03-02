CREATE TABLE departamentos (
id INT PRIMARY KEY AUTO_INCREMENT ,
nome VARCHAR(100) NOT NULL
);

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