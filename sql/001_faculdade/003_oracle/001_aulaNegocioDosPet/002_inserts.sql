INSERT INTO ESPECIE VALUES (1, 'Cão');
INSERT INTO ESPECIE VALUES (2, 'Gato');
INSERT INTO ESPECIE VALUES (3, 'Coelho');
INSERT INTO ESPECIE VALUES (4, 'Hamster');

-- TUTORES (o e-mail é opcional: Carlos não informou)
INSERT INTO TUTOR VALUES ('11122233344', 'Ana Paula Souza', 'ana.souza@email.com',
'Rua Barão de Jaguara', '1200', 'Centro', 'Campinas', '13015001');

INSERT INTO TUTOR VALUES ('22233344455', 'Carlos Eduardo Lima', NULL,
'Rua Dr. Quirino', '450', 'Centro', 'Campinas', '13015081');

INSERT INTO TUTOR VALUES ('33344455566', 'Fernanda Ribeiro', 'fernanda.r@email.com',
'Rua das Hortênsias', '87', 'Taquaral', 'Campinas', '13076000');

INSERT INTO TUTOR VALUES ('44455566677', 'João Pedro Martins', 'jp.martins@email.com',
'Rua Coronel Quirino', '310', 'Cambuí', 'Campinas', '13025000');

INSERT INTO TUTOR VALUES ('55566677788', 'Luciana Torres', 'lu.torres@email.com',
'Av. Albino J. B. de Oliveira', '1500', 'Barão Geraldo', 'Campinas', '13084008');


-- TELEFONES (atributo multivalorado: todo tutor tem pelo menos um)
INSERT INTO TELEFONE_TUTOR VALUES ('11122233344', '19991110001');
INSERT INTO TELEFONE_TUTOR VALUES ('11122233344', '1932510001');
INSERT INTO TELEFONE_TUTOR VALUES ('22233344455', '19992220002');
INSERT INTO TELEFONE_TUTOR VALUES ('33344455566', '19993330003');
INSERT INTO TELEFONE_TUTOR VALUES ('33344455566', '19983330033');
INSERT INTO TELEFONE_TUTOR VALUES ('44455566677', '19994440004');
INSERT INTO TELEFONE_TUTOR VALUES ('55566677788', '19995550005');


-- ANIMAIS (entidade fraca: a numeração recomeça em 1 para cada tutor)
-- colunas: cpf_tutor, num_animal, nome, data_nasc, sexo, peso, codigo_especie
INSERT INTO ANIMAL VALUES ('11122233344', 1, 'Thor', DATE '2019-03-10', 'M', 28.50, 1);
INSERT INTO ANIMAL VALUES ('11122233344', 2, 'Mel', DATE '2021-07-01', 'F', 4.20, 2);
INSERT INTO ANIMAL VALUES ('22233344455', 1, 'Pipoca', DATE '2023-01-15', 'F', 1.80, 3);
INSERT INTO ANIMAL VALUES ('33344455566', 1, 'Luna', DATE '2018-11-20', 'F', 3.90, 2);
INSERT INTO ANIMAL VALUES ('33344455566', 2, 'Bob', DATE '2022-05-05', 'M', 12.30, 1);
INSERT INTO ANIMAL VALUES ('33344455566', 3, 'Nina', DATE '2024-02-01', 'F', 6.70, 1);
INSERT INTO ANIMAL VALUES ('44455566677', 1, 'Max', DATE '2017-09-12', 'M', 32.00, 1);
INSERT INTO ANIMAL VALUES ('55566677788', 1, 'Frida', DATE '2025-04-10', 'F', 2.10, 2);


-- FUNCIONÁRIOS (superclasse da especialização)
INSERT INTO FUNCIONARIO VALUES (101, 'Beatriz Campos', '90011122233', DATE '2015-02-
01', 9500.00);

INSERT INTO FUNCIONARIO VALUES (102, 'Rafael Nogueira', '90022233344', DATE '2019-08-
15', 8700.00);

INSERT INTO FUNCIONARIO VALUES (201, 'Juliana Alves', '90033344455', DATE '2020-03-
02', 2800.00);

INSERT INTO FUNCIONARIO VALUES (202, 'Marcos Pereira', '90044455566', DATE '2023-06-
12', 2600.00);


-- VETERINÁRIOS e RECEPCIONISTAS (subclasses: a matrícula é PK e FK)
INSERT INTO VETERINARIO VALUES (101, 'SP-12345', 'Clínica geral');
INSERT INTO VETERINARIO VALUES (102, 'SP-67890', 'Dermatologia');
INSERT INTO RECEPCIONISTA VALUES (201, 'Manhã');
INSERT INTO RECEPCIONISTA VALUES (202, 'Tarde');


-- MEDICAMENTOS (o medicamento 5 nunca será prescrito)
INSERT INTO MEDICAMENTO VALUES (1, 'Apoquel', 'Maleato de oclacitinib');

INSERT INTO MEDICAMENTO VALUES (2, 'Drontal Plus', 'Praziquantel, pamoato de pirantel e
febantel');

INSERT INTO MEDICAMENTO VALUES (3, 'Meloxivet', 'Meloxicam');

INSERT INTO MEDICAMENTO VALUES (4, 'Synulox', 'Amoxicilina e clavulanato de
potássio');

INSERT INTO MEDICAMENTO VALUES (5, 'Cerenia', 'Citrato de maropitant');


-- CONSULTAS
-- colunas: num_consulta, data_hora, motivo, diagnostico, valor,
-- cpf_tutor, num_animal, matricula_vet, matricula_recep
-- matricula_recep NULL = consulta agendada pelo aplicativo

INSERT INTO CONSULTA VALUES (1, TIMESTAMP '2026-08-03 09:00:00',
'Vacinação anual', 'Animal saudável', 150.00,
'11122233344', 1, 101, 201);

INSERT INTO CONSULTA VALUES (2, TIMESTAMP '2026-08-10 14:30:00',
'Coceira intensa e queda de pelo', 'Dermatite alérgica', 220.00,
'33344455566', 1, 102, NULL);

INSERT INTO CONSULTA VALUES (3, TIMESTAMP '2026-08-15 10:00:00',
'Dor ao caminhar', 'Artrose', 180.00,
'44455566677', 1, 101, 202);

INSERT INTO CONSULTA VALUES (4, TIMESTAMP '2026-09-02 16:00:00',
'Perda de apetite', 'Crescimento excessivo dos dentes', 160.00,
'22233344455', 1, 101, NULL);

INSERT INTO CONSULTA VALUES (5, TIMESTAMP '2026-09-20 11:15:00',
'Vermifugação e check-up', 'Animal saudável', 130.00,
'33344455566', 2, 102, 201);

INSERT INTO CONSULTA VALUES (6, TIMESTAMP '2026-10-05 08:30:00',
'Ferimento na pata', 'Infecção cutânea', 200.00,
'11122233344', 1, 102, 202);

-- consulta agendada e ainda não realizada: sem diagnóstico e sem valor
INSERT INTO CONSULTA VALUES (7, TIMESTAMP '2026-10-20 15:00:00',
'Vômitos frequentes', NULL, NULL,
'11122233344', 2, 101, NULL);


-- PRESCRIÇÕES (relacionamento N:N com atributos)
-- colunas: num_consulta, cod_med, dosagem, frequencia, duracao (dias)
-- as consultas 1, 4 e 7 terminam sem prescrição
INSERT INTO PRESCRICAO VALUES (2, 1, '0,4 mg/kg', 'a cada 12 horas', 14);
INSERT INTO PRESCRICAO VALUES (3, 3, '0,1 mg/kg', 'a cada 24 horas', 10);
INSERT INTO PRESCRICAO VALUES (5, 2, '1 comprimido', 'dose única', 1);
INSERT INTO PRESCRICAO VALUES (6, 4, '12,5 mg/kg', 'a cada 12 horas', 7);
INSERT INTO PRESCRICAO VALUES (6, 3, '0,1 mg/kg', 'a cada 24 horas', 5);
COMMIT;