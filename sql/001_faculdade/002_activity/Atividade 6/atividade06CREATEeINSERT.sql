-- Active: 1772753672825@@127.0.0.1@3306@exercicio_joyce
CREATE TABLE autores (
id_autor INT AUTO_INCREMENT PRIMARY KEY,
nome_autor VARCHAR(100),
nacionalidade VARCHAR(50)
);

CREATE TABLE livros (
id_livro INT AUTO_INCREMENT PRIMARY KEY,
titulo VARCHAR(100),
genero VARCHAR(50),
ano_publicacao INT,
id_autor INT,
FOREIGN KEY (id_autor) REFERENCES autores(id_autor)
);

CREATE TABLE emprestimos (
id_emprestimo INT AUTO_INCREMENT PRIMARY KEY,
id_livro INT,
nome_aluno VARCHAR(100),
data_emprestimo DATE,
data_devolucao DATE,
FOREIGN KEY (id_livro) REFERENCES livros(id_livro)
);

INSERT INTO autores (nome_autor, nacionalidade) VALUES
('Machado de Assis', 'Brasileira'),
('Clarice Lispector', 'Brasileira'),
('George Orwell', 'Britânica'),
('J. K. Rowling', 'Britânica'),
('José Saramago', 'Portuguesa'),
('Agatha Christie', 'Britânica'),
('Carlos Drummond de Andrade', 'Brasileira');

INSERT INTO livros (titulo, genero, ano_publicacao, id_autor) VALUES
('Dom Casmurro', 'Romance', 1899, 1),
('Memórias Póstumas de Brás Cubas', 'Romance', 1881, 1),
('A Hora da Estrela', 'Romance', 1977, 2),
('1984', 'Ficção', 1949, 3),
('A Revolução dos Bichos', 'Ficção', 1945, 3),
('Harry Potter e a Pedra Filosofal', 'Fantasia', 1997, 4),
('Ensaio sobre a Cegueira', 'Romance', 1995, 5),
('Assassinato no Expresso do Oriente', 'Mistério', 1934, 6),
('Sentimento do Mundo', 'Poesia', 1940, 7),
('Livro sem Autor Cadastrado', 'Didático', 2020, NULL);

INSERT INTO emprestimos (id_livro, nome_aluno, data_emprestimo,
data_devolucao) VALUES
(1, 'Ana Souza', '2026-04-01', '2026-04-10'),
(3, 'Carlos Lima', '2026-04-02', NULL),
(4, 'Fernanda Alves', '2026-04-05', '2026-04-12'),
(6, 'João Pedro', '2026-04-08', NULL),
(8, 'Mariana Costa', '2026-04-10', '2026-04-18'),
(1, 'Ricardo Gomes', '2026-04-15', NULL),
(9, 'Juliana Rocha', '2026-04-20', NULL);
