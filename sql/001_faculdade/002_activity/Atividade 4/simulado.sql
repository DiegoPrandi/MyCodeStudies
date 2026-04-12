-- 1) (1,0pt) Crie para o sistema de achados e perdidos a tabela Pontos_Recolhimento 
CREATE TABLE Pontos_Recolhimento (
    id_ponto INT AUTO_INCREMENT PRIMARY KEY,
    nome_terminal VARCHAR(100) NOT NULL,
    localizacao VARCHAR(150),
    capacidade_itens INT,
    taxa_custodia DECIMAL(10,2),
    nome_responsavel VARCHAR(100) NOT NULL
);

-- 2) (1,0pt) Crie para o sistema de achados e perdidos a tabela Itens_Achados
CREATE TABLE Itens_Achados (
    id_item INT AUTO_INCREMENT PRIMARY KEY,
    descricao TEXT NOT NULL,
    data_achado DATE,
    categoria VARCHAR(50) DEFAULT 'Geral',
    id_ponto INT,
    FOREIGN KEY (id_ponto) REFERENCES Pontos_Recolhimento(id_ponto)
);

-- 3) (1,0pt) Adicione na tabela Itens_Achados
ALTER TABLE Itens_Achados
ADD status VARCHAR(50);

ALTER TABLE Pontos_Recolhimento
MODIFY localizacao VARCHAR(250) NOT NULL;

-- 4) (1,0pt) Crie um comando em MySQL para inserir um novo ponto de recolhimento
INSERT INTO Pontos_Recolhimento 
(nome_terminal, localizacao, capacidade_itens, taxa_custodia, nome_responsavel)
VALUES 
('Terminal Central', 'Plataforma A - Setor Azul', 500, 15.50, 'Ricardo Souza');

-- 5) (1,0pt) Crie um comando em MySQL para atualizar o status para “Destinado à Doação” 
UPDATE Itens_Achados
SET status = 'Destinado à Doação'
WHERE data_achado < '2025-01-01';

-- 6) (1,0pt) Crie um comando em MySQL para excluir todos os itens da tabela Itens_Achados
DELETE FROM Itens_Achados
WHERE descricao LIKE '%Perecível%';

-- 7) (1,0pt) Crie um comando em MySQL para mostrar os campos 
SELECT descricao, data_achado, categoria
FROM Itens_Achados
WHERE YEAR(data_achado) = 2026
AND categoria = 'Eletrônicos';

-- 8) (1,0pt) Crie um comando em MySQL para mostrar os campos
SELECT id_ponto, nome_terminal, nome_responsavel
FROM Pontos_Recolhimento;

-- 9. (1,0pt) Qual comando em MySQL mostra os campos 
-- B
SELECT descricao, data_achado, status FROM Itens_Achados WHERE data_achado BETWEEN '2025-
01-01' AND '2025-03-31' AND status = 'Disponível';

-- 10. (1,0pt) Qual comando em MySQL mostra a quantidade de itens por categoria, exibindo os campos
--categoria e total_itens?
-- C
SELECT categoria, COUNT(*) AS total_itens FROM Itens_Achados GROUP BY categoria;

-- 11. (1,0pt) Qual comando em MySQL adiciona uma nova coluna
-- B
ALTER TABLE Itens_Achados ADD observacao VARCHAR(100);

-- 2. (1,0pt) Qual comando em MySQL exclui todos os itens cuja descrição contenha a palavra 'Documento'?
-- B
DELETE FROM Itens_Achados WHERE descricao LIKE '%Documento%';