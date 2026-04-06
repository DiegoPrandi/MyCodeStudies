-- 1) Liste todos os dados da tabela clientes
SELECT * FROM clientes;

-- 2) Liste todos os dados da tabela produtos
SELECT * FROM produtos;

-- 3) Liste apenas nome e cidade dos clientes
SELECT nome, cidade
FROM clientes;

-- 4) Liste nome_produto e preco dos produtos
SELECT nome_produto, preco
FROM produtos;

-- 5) Liste clientes da cidade “Campinas”
SELECT * FROM clientes
WHERE cidade = 'Campinas';

-- 6) Liste produtos da categoria “Móveis”
SELECT * FROM produtos
WHERE categoria = 'Móveis';

-- 7) Liste produtos com preço maior que 500
SELECT * FROM produtos
WHERE preco > 500;

-- 8) Liste clientes com idade menor que 30
SELECT * FROM clientes
WHERE idade < 50;

-- 9) Liste clientes de Campinas com idade maior que 30
SELECT * FROM clientes
WHERE cidade = 'Campinas'
AND idade > 30;

-- 10) Liste produtos da categoria Eletrônicos com preço maior que 100  
SELECT * FROM produtos
WHERE categoria = 'Eletrônicos'
AND preco > 100;

-- 11) Liste clientes que moram em Campinas ou São Paulo
SELECT * FROM clientes
WHERE cidade = 'Campinas'
OR cidade = 'São Paulo';

-- 12) Liste produtos da categoria Móveis ou Decoração
SELECT * FROM produtos
WHERE produtos = 'Móveis'
OR produtos = 'Decoração';

-- 13) Liste clientes cujo nome começa com “A”
SELECT * 
FROM clientes
WHERE nome LIKE 'A%';

-- 14) Liste produtos que começam com “C”
SELECT * 
FROM produtos
WHERE nome_produto LIKE 'C%';

-- 15) Liste clientes ordenados pelo nome  
SELECT * 
FROM clientes
ORDER BY nome;

-- 16) Liste produtos ordenados pelo preço  
SELECT *
FROM produtos
ORDER BY preco;

-- 17) Liste produtos do mais caro para o mais barato 
SELECT *
FROM produtos
ORDER BY preco DESC;

-- 18) Liste clientes do mais velho para o mais novo
SELECT * 
FROM clientes
ORDER BY idade DESC;

-- 19) Conte quantos clientes existem por cidade 
SELECT cidade,
COUNT(*) AS total
FROM clientes
GROUP BY cidade;

-- 20) Conte quantos produtos existem por categoria 
SELECT categoria,
COUNT(*) AS total
FROM produtos
GROUP BY categoria;

-- 21) Some o valor total dos produtos por categoria 
SELECT categoria,
SUM(preco) AS total
FROM produtos
GROUP BY categoria;

-- 22) Calcule a média de preço por categoria
SELECT categoria,
AVG(preco) AS media
FROM produtos
GROUP BY categoria;

-- 23) Mostre cidades com mais de 3 clientes  
SELECT cidade,
COUNT(*) AS total
FROM clientes
GROUP BY cidade
HAVING COUNT(*) > 3;

-- 24) Mostre categorias com soma de preços maior que 3000 
SELECT categoria,
SUM(preco) AS total
FROM produtos
GROUP BY categoria
HAVING SUM(preco) > 3000;

