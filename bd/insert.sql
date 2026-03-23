SHOW TABLES;

SELECT * FROM produtos;


CREATE TABLE produtos(
	id_produto int primary key auto_increment,
    nome VARCHAR(50),
    preco DECIMAL(5,2),
    quantidade INT
);

INSERT INTO produtos(nome, preco, quantidade)
VALUES ('Lápis', 1.20, 150);

SELECT * FROM produtos;