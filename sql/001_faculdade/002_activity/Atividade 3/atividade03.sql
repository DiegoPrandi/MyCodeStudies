-- 1) Altere a cidade do cliente 'Ana Souza' para 'Hortolândia'.
UPDATE clientes 
SET cidade = 'Hortolândia'
WHERE nome = 'Ana Souza';

-- 2) Altere o preço do produto 'Caneta Azul' para 3.50.
UPDATE produtos 
SET preco = 3.50 
WHERE nome_produto = 'Caneta Azul';

-- 3) Altere o status do pedido de id_pedido = 2 para 'Entregue'.
UPDATE pedidos 
SET status_pedido = 'Entregue'
WHERE id_pedido = 2;

-- 4) Aumente em 10.00 o preço de todos os produtos da categoria 'Papelaria'.
UPDATE produtos 
SET preco = preco + 10.00 
WHERE categoria = 'Papelaria';

-- 5) Altere o status_cliente para 'Ativo' de todos os clientes que estão como 'Inativo'.
UPDATE clientes 
SET status_cliente = 'Ativo'
WHERE status_cliente = 'Inativo';

-- 6) Reduza em 5 unidades o estoque do produto 'Mochila'.
UPDATE produtos 
SET estoque = estoque - 5 
WHERE nome_produto = 'Mochila';

-- 7) Altere o status_pedido para 'Cancelado' de todos os pedidos com valor_total menor que 60.00.
UPDATE pedidos 
SET status_pedido = 'Cancelado' 
WHERE valor_total < 60.00;

-- 8) Aumente em 15% o preço de todos os produtos da categoria 'Informática'.
UPDATE produtos 
SET preco = preco * 1.15 
WHERE categoria = 'Informática';

-- 9) Altere a cidade para 'Campinas' de todos os clientes que têm idade menor que 25 anos.
UPDATE clientes 
SET cidade = 'Campinas' 
WHERE idade < 25;

-- 10) Altere o status_pedido para 'Entregue' em todos os pedidos feitos por clientes da cidade de 'São Paulo'.
UPDATE pedidos 
SET status_pedido = 'Entregue' 
WHERE id_cliente IN (SELECT id_cliente FROM clientes WHERE cidade = 'São Paulo');

-------------------------------------------------------------------------------------------------------------------
-- DELETE
-- 1) Exclua o produto com id_produto = 10.
DELETE FROM produtos 
WHERE id_produto = 10;

-- 2) Exclua o cliente chamado 'João Pedro'.
DELETE FROM clientes
WHERE nome = 'João Pedro';

-- 3) Exclua o pedido com id_pedido = 3.
DELETE FROM pedidos 
WHERE id_pedido = 3;

-- 4) Exclua todos os produtos da categoria 'Livros'.
DELETE FROM produtos
WHERE categoria = 'Livros';

-- 5) Exclua todos os clientes com status_cliente = 'Inativo'.
DELETE FROM clientes 
WHERE status_cliente = 'Inativo';

-- 6) Exclua todos os pedidos com status_pedido = 'Cancelado'.
DELETE FROM pedidos 
WHERE status_pedido = 'Cancelado';

-- 7) Exclua todos os produtos com estoque menor que 15.
DELETE FROM produtos
WHERE estoque < 15;

-- 8) Exclua todos os clientes com idade maior que 35 anos.
DELETE FROM clientes 
WHERE idade > 35;

-- 9) Exclua todos os pedidos com valor_total menor que 50.00.
DELETE FROM pedidos 
WHERE valor_total < 50.00;

-- 10) Exclua todos os pedidos realizados por clientes da cidade de 'Campinas'.
DELETE FROM pedidos 
WHERE id_cliente IN (SELECT id_cliente FROM clientes WHERE cidade = 'Campinas');
