UPDATE clientes
SET cidade = 'Hortolandia'
WHERE nome = 'Ana Souza';

UPDATE produto
SET preco = 3.50
WHERE nome = 'Caneta Azul';


UPDATE cliente
SET status_cliente = 'Ativo'
WHERE status_cliente = 'Inativo';

UPDATE produto
SET estoque = estoque - 5
where nome = 'Mochila';

UPDATE pedido
SET status_pedido = 'Cancelado'
WHERE valor_total < 60;

UPDATE produto
SET preco = preco * 1.15
WHERE nome = 'Informatica'

UPDATE cliente
SET cidade = 'Campinas'
WHERE idade < 25

UPDATE pedido
SET status_pedidos = 'Entregue'
WHERE cidade = 'Sao Paulo'