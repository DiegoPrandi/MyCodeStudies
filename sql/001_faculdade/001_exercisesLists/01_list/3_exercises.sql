# pai
CREATE TABLE ambulatorios (
id_ambulatorio INT PRIMARY KEY,
andar INT NOT NULL,
capacidade INT NOT NULL
);

INSERT INTO ambulatorios VALUES
(1,1,30),
(2,2,40),
(3,3,25),
(4,1,20);

# ex 1
CREATE TABLE medicos (
id_medico INT PRIMARY KEY,
nome VARCHAR(100) NOT NULL,
especialidade VARCHAR(50) NOT NULL,
id_ambulatorio INT,
FOREIGN KEY (id_ambulatorio) REFERENCES ambulatorios(id_ambulatorio)
);

INSERT INTO medicos VALUES
(101,'Carlos Lima','Cardiologia',1),
(102,'Ana Souza','Ortopedia',2);

# ex 2
CREATE TABLE enfermeiros (
id_enfermeiro INT PRIMARY KEY,
nome VARCHAR(100) NOT NULL,
registro_coren VARCHAR(20) NOT NULL,
id_ambulatorio INT,
CONSTRAINT fk_enfermeiros_ambulatorios
FOREIGN KEY (id_ambulatorio) REFERENCES ambulatorios(id_ambulatorio)
);

INSERT INTO enfermeiros VALUES
(201,'Marina Alves','COREN12345',1),
(202,'Paulo Mendes','COREN67890',3);

# ex 3
CREATE TABLE pacientes (
id_paciente INT PRIMARY KEY,
nome VARCHAR(100) NOT NULL,
idade INT NOT NULL,
id_ambulatorio INT
);

ALTER TABLE pacientes
ADD FOREIGN KEY (id_ambulatorio) REFERENCES ambulatorios(id_ambulatorio);

INSERT INTO pacientes VALUES
(301,'Joao Pedro',45,2),
(302,'Fernanda Costa',29,4);

# ex 4
CREATE TABLE consultas (
id_consulta INT PRIMARY KEY,
data_consulta DATE NOT NULL,
observacao VARCHAR(150),
id_ambulatorio INT
);

ALTER TABLE consultas
ADD CONSTRAINT fk_consultas_ambulatorios
FOREIGN KEY (id_ambulatorio) REFERENCES ambulatorios(id_ambulatorio);

INSERT INTO consultas VALUES
(401,'2026-03-09','Consulta de rotina',1),
(402,'2026-03-10','Retorno medico',3);

SELECT * FROM ambulatorios;
SELECT * FROM medicos;
SELECT * FROM enfermeiros;
SELECT * FROM pacientes;
SELECT * FROM consultas;


# EXERCICIOS 

# 1 - 
CREATE TABLE clinica_lab(
	id_ambulatorio INT PRIMARY KEY,
	andar INT NOT NULL,
	capacidade INT NOT NULL
);

INSERT INTO clinica_lab VALUES
(101, 1, 12),
(102, 2, 12),
(103, 3, 12);

CREATE TABLE FUNCIONARIOS2 (
	id_funcionario INT PRIMARY KEY,
	nome VARCHAR(100),
	cargo VARCHAR(50),
	id_ambulatorio INT,
    FOREIGN KEY (id_ambulatorio) REFERENCES clinica_lab(id_ambulatorio)
);

INSERT INTO FUNCIONARIOS2 VALUES
(1, "Adimmar", "Veterinario", 101),
(2, "Adimmar Junior", "Veterinario", 102);

CREATE TABLE recepcionistas (
	id_recepcionista INT PRIMARY KEY,
	nome VARCHAR(100),
	turno VARCHAR(20),
	id_ambulatorio INT,
    CONSTRAINT fk_ambulatorios
	FOREIGN KEY (id_ambulatorio) REFERENCES clinica_lab(id_ambulatorio)
); 

INSERT INTO recepcionistas VALUES
(1001, "Carlinha", "Quando quiser", 103),
(1002, "Karla", "Manhã", 102);

CREATE TABLE internacoes (
	id_internacao INT PRIMARY KEY,
	data_entrada DATE,
	data_saida DATE,
	id_ambulatorio INT
);

INSERT INTO internacoes VALUES
(1002, '2026-02-12', '2026-03-09', 103);

ALTER TABLE internacoes
ADD CONSTRAINT fk_internacoes_clinica
FOREIGN KEY (id_ambulatorio) REFERENCES clinica_lab(id_ambulatorio);

SELECT * FROM clinica_lab, FUNCIONARIOS2, recepcionistas, internacoes;
SELECT * FROM FUNCIONARIOS2;
SELECT * FROM recepcionistas;
SELECT * FROM internacoes;



