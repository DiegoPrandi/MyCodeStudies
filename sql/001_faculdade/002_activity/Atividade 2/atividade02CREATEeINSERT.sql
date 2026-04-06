USE BD12022667;
drop table clientes;
drop table if exists produtos;
CREATE TABLE clientes (
id_cliente INT AUTO_INCREMENT PRIMARY KEY,
nome VARCHAR(100),
cidade VARCHAR(100),
idade INT
);
CREATE TABLE produtos (
id_produto INT AUTO_INCREMENT PRIMARY KEY,
nome_produto VARCHAR(100),
categoria VARCHAR(50),
preco DECIMAL(10,2),
estoque INT
);

INSERT INTO clientes (nome, cidade, idade) VALUES
('Ana Souza', 'Campinas', 25),
('Carlos Lima', 'São Paulo', 40),
('Fernanda Alves', 'Campinas', 32),
('João Pedro', 'Hortolândia', 28),
('Mariana Costa', 'Sumaré', 35),
('Ricardo Gomes', 'Campinas', 45),
('Juliana Rocha', 'São Paulo', 22),
('Bruno Martins', 'Sumaré', 30),
('Patrícia Dias', 'Campinas', 27),
('Lucas Fernandes', 'Hortolândia', 33),
('Camila Ribeiro', 'Campinas', 29),
('Eduardo Silva', 'São Paulo', 50),
('Amanda Freitas', 'Sumaré', 26),
('Felipe Santos', 'Campinas', 38),
('Renata Oliveira', 'Hortolândia', 41);
INSERT INTO produtos (nome_produto, categoria, preco, estoque) VALUES
('Notebook', 'Eletrônicos', 3500.00, 10),
('Mouse', 'Eletrônicos', 80.00, 100),
('Teclado', 'Eletrônicos', 150.00, 80),
('Cadeira', 'Móveis', 600.00, 20),
('Mesa', 'Móveis', 900.00, 15),
('Celular', 'Eletrônicos', 2500.00, 25),
('Fone de ouvido', 'Eletrônicos', 200.00, 50),
('Impressora', 'Eletrônicos', 1200.00, 12),
('Sofá', 'Móveis', 2000.00, 5),
('Luminária', 'Decoração', 120.00, 40),
('Tapete', 'Decoração', 300.00, 30),
('Quadro', 'Decoração', 180.00, 25),
('Monitor', 'Eletrônicos', 1300.00, 18),
('Estante', 'Móveis', 750.00, 10),
('Carregador', 'Eletrônicos', 90.00, 60);