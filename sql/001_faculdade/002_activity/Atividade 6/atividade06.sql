-- 1) Liste todos os livros e seus respectivos autores, mostrando também
-- livros sem autor cadastrado.

SELECT a.nome_autor, l.titulo
FROM livros l
LEFT JOIN autores a
ON a.id_autor = l.id_autor;

--2) Liste somente os livros que possuem autores cadastrados.

SELECT a.nome_autor, l.titulo
FROM autores a
JOIN livros l
ON a.id_autor = l.id_autor

-- 3) Liste todos os empréstimos e os dados dos livros emprestados.

SELECT e.*, l.titulo, l.genero, l.ano_publicacao
FROM emprestimos e
LEFT JOIN livros l
ON e.id_livro = l.id_livro;

-- 4) Liste todos os livros e, se houver, os alunos que os pegaram
-- emprestados.

SELECT l.titulo, e.nome_aluno
FROM livros l
LEFT JOIN emprestimos e
ON l.id_livro = e.id_livro;

-- 5) Liste todos os autores e, se houver, seus respectivos livros.

SELECT a.nome_autor, l.titulo
FROM autores a
LEFT JOIN livros l
ON a.id_autor = l.id_autor;

-- 6) Liste os livros que nunca foram emprestados.

SELECT l.titulo, e.nome_aluno
FROM livros l
LEFT JOIN emprestimos e
ON l.id_livro = e.id_livro
WHERE e.id_livro IS NULL;


-- 7) Liste os autores que não possuem livros cadastrados.

SELECT a.nome_autor
FROM autores a
LEFT JOIN livros l
ON a.id_autor = l.id_autor
WHERE l.id_autor IS NULL;

-- 8) Liste os livros de autores brasileiros.
SELECT l.titulo, a.nome_autor, a.nacionalidade
FROM livros l
JOIN autores a
ON l.id_autor = a.id_autor
WHERE a.nacionalidade = 'Brasileira';

-- 9) Liste todos os empréstimos e seus respectivos livros (mantendo todos
--os empréstimos)

SELECT l.titulo, e.*
FROM emprestimos e 
LEFT JOIN livros l
ON l.id_livro = e.id_livro;

-- 10) Liste os autores britânicos e seus livros.

SELECT  a.nome_autor,l.titulo, a.nacionalidade
FROM livros l
JOIN autores a
ON l.id_autor = a.id_autor
WHERE a.nacionalidade = 'Britânica';

-- 11) Liste todos os livros e seus autores usando RIGHT JOIN.

SELECT a.nome_autor, l.titulo
FROM autores a
RIGHT JOIN livros l
ON l.id_autor = a.id_autor;

-- 12) Liste os empréstimos que ainda não foram devolvidos, mostrando o
--título do livro e o nome do aluno.

SELECT l.titulo, e.nome_aluno, e.data_emprestimo, e.data_devolucao
FROM emprestimos e
JOIN livros l
ON e.id_livro = l.id_livro
WHERE e.data_devolucao IS NULL;

-- 13) Liste todos os livros do gênero Romance e seus autores.
SELECT l.titulo, a.nome_autor, l.genero
FROM livros l
JOIN autores a
ON l.id_autor = a.id_autor
WHERE l.genero = 'Romance';

-- 14) Liste todos os autores e livros, mantendo todos os livros mesmo sem
--autor.

SELECT a.nome_autor, l.titulo   
FROM livros l
LEFT JOIN autores a
ON l.id_autor = a.id_autor;

-- 15) Liste os alunos que fizeram mais de um empréstimo, mostrando o nome e
--a quantidade.

SELECT e.nome_aluno, COUNT(*) AS quantidade
FROM emprestimos e
GROUP BY e.nome_aluno
HAVING COUNT(*) > 1;

-- 16) Criação dos Insert

INSERT INTO autores (nome_autor, nacionalidade) VALUES
('Felipão Do Grau', 'Brasileiro');


INSERT INTO emprestimos (id_livro, nome_aluno, data_emprestimo,
data_devolucao) VALUES
(2, 'Ana Souza', '2026-04-01', NULL);