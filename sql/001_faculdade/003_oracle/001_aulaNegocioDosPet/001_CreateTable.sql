CREATE TABLE TUTOR (
    cpf_tutor CHAR(11) NOT NULL,
    nome VARCHAR(100) NOT NULL,
    email VARCHAR(100),
    rua VARCHAR(100) NOT NULL,
    numero VARCHAR(10) NOT NULL,
    bairro VARCHAR(60) NOT NULL,
    cidade VARCHAR(60) NOT NULL,
    cep CHAR(8) NOT NULL,
    PRIMARY KEY (cpf_tutor)
);


CREATE TABLE TELEFONE_TUTOR (
    cpf_tutor CHAR(11) NOT NULL,
    telefone VARCHAR(15) NOT NULL,
    PRIMARY KEY (cpf_tutor, telefone),
    FOREIGN KEY (cpf_tutor) REFERENCES TUTOR (cpf_tutor)
    ON DELETE CASCADE
);


CREATE TABLE ESPECIE (
    codigo_especie INT NOT NULL,
    nome VARCHAR(50) NOT NULL,
    PRIMARY KEY (codigo_especie)
);


CREATE TABLE ANIMAL (
    cpf_tutor CHAR(11) NOT NULL,
    num_animal INT NOT NULL,
    nome VARCHAR(60) NOT NULL,
    data_nasc DATE NOT NULL,
    sexo CHAR(1) NOT NULL,
    peso DECIMAL(6,2) NOT NULL,
    codigo_especie INT NOT NULL,
    PRIMARY KEY (cpf_tutor, num_animal),
    FOREIGN KEY (cpf_tutor) REFERENCES TUTOR (cpf_tutor)
    ON DELETE CASCADE,
    FOREIGN KEY (codigo_especie) REFERENCES ESPECIE (codigo_especie)
    -- sem ação: padrão do Oracle = restrição (equivale ao RESTRICT)
);


CREATE TABLE FUNCIONARIO (
    matricula INT NOT NULL,
    nome VARCHAR(100) NOT NULL,
    cpf CHAR(11) NOT NULL,
    data_adm DATE NOT NULL,
    salario DECIMAL(10,2) NOT NULL,
    PRIMARY KEY (matricula),
    UNIQUE (cpf)
);


CREATE TABLE VETERINARIO (
    matricula INT NOT NULL,
    crmv VARCHAR(20) NOT NULL,
    especialidade VARCHAR(60) NOT NULL,
    PRIMARY KEY (matricula),
    FOREIGN KEY (matricula) REFERENCES FUNCIONARIO (matricula)
    ON DELETE CASCADE
);


CREATE TABLE RECEPCIONISTA (
    matricula INT NOT NULL,
    turno VARCHAR(20) NOT NULL,
    PRIMARY KEY (matricula),
    FOREIGN KEY (matricula) REFERENCES FUNCIONARIO (matricula)
    ON DELETE CASCADE
);


CREATE TABLE MEDICAMENTO (
    cod_med INT NOT NULL,
    nome VARCHAR(100) NOT NULL,
    principio_ativo VARCHAR(100) NOT NULL,
    PRIMARY KEY (cod_med)
);


CREATE TABLE CONSULTA (
    num_consulta INT NOT NULL,
    data_hora TIMESTAMP NOT NULL,
    motivo VARCHAR(200) NOT NULL,
    diagnostico VARCHAR(500),
    valor DECIMAL(10,2),
    cpf_tutor CHAR(11) NOT NULL,
    num_animal INT NOT NULL,
    matricula_vet INT NOT NULL,
    matricula_recep INT,
    PRIMARY KEY (num_consulta),
    FOREIGN KEY (cpf_tutor, num_animal)
    REFERENCES ANIMAL (cpf_tutor, num_animal),
    -- sem ação: padrão do Oracle = restrição (equivale ao RESTRICT)
    FOREIGN KEY (matricula_vet) REFERENCES VETERINARIO (matricula),
    -- sem ação: padrão do Oracle = restrição (equivale ao RESTRICT)
    FOREIGN KEY (matricula_recep) REFERENCES RECEPCIONISTA (matricula)
ON DELETE SET NULL
);


CREATE TABLE PRESCRICAO (
    num_consulta INT NOT NULL,
    cod_med INT NOT NULL,
    dosagem VARCHAR(50) NOT NULL,
    frequencia VARCHAR(50) NOT NULL,
    duracao INT NOT NULL,
    PRIMARY KEY (num_consulta, cod_med),
    FOREIGN KEY (num_consulta) REFERENCES CONSULTA (num_consulta)
    ON DELETE CASCADE,
    FOREIGN KEY (cod_med) REFERENCES MEDICAMENTO (cod_med)
    -- sem ação: padrão do Oracle = restrição (equivale ao RESTRICT)
);