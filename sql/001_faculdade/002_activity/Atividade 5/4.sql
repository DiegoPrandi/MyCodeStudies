SELECT produtos
WHERE preco > 500

SELECT cliente
WHERE idade > 30

SELECT cliente
WHERE cidade = 'Campinas'
OR cidade = 'Sao Paulo'

SELECT * FROM clientes
WHERE nome LIKE 'A%';

SELECT * FROM cliente
ORDER BY nome;

SELECET cidade,
COUNT(*) AS total
FROM clientes
GROUP BY cidade;

SELECT categoria,
SUM(preco) AS total
FROM produtos
GROUP BY categoria;

SELECT cidade,
COUNT(*) AS total
from clientes
GROUP BY cidade
HAVING COUNT(*) > 3;