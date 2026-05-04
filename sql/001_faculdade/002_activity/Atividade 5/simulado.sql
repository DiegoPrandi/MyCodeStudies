use exercicio_joyce;

alter table Itens_Achados
add status VARCHAR(50);


ALTER TABLE Pontos_Recolhimento
MODIFY COLUMN localizacao VARCHAR(250) NOT NULL;


UPDATE Itens_Achados
SET status = 'Destinaado à Doação'
WHERE data_achado < '2025-01-01';

DELETE FROM Itens_Achados
WHERE descricao LIKE '%Perecível%'

SELECT descricao, data_achado, categoria
FROM Itens_Achados
WHERE data_achado  = '2026'
AND categoria = 'Eletrônicos'


