-- 3.1 Todos os tutores
SELECT * FROM TUTOR;

-- 3.2 Telefones de cada tutor (atributo multivalorado em tabela própria)
SELECT t.nome AS tutor, tt.telefone
FROM TUTOR t
JOIN TELEFONE_TUTOR tt ON tt.cpf_tutor = t.cpf_tutor
ORDER BY t.nome;

-- 3.3 Animais com seu tutor e sua espécie
-- (repare que o num_animal se repete entre tutores diferentes)
SELECT t.nome AS tutor, a.num_animal, a.nome AS animal,
e.nome AS especie, a.peso
FROM ANIMAL a
JOIN TUTOR t ON t.cpf_tutor = a.cpf_tutor
JOIN ESPECIE e ON e.codigo_especie = a.codigo_especie
ORDER BY t.nome, a.num_animal;

-- 3.4 Funcionários com o seu tipo (especialização)
SELECT f.matricula, f.nome, v.crmv, v.especialidade, r.turno
FROM FUNCIONARIO f
LEFT JOIN VETERINARIO v ON v.matricula = f.matricula
LEFT JOIN RECEPCIONISTA r ON r.matricula = f.matricula
ORDER BY f.matricula;

-- 3.5 Consultas com animal, veterinário e quem agendou
-- (junção pela chave estrangeira COMPOSTA cpf_tutor + num_animal;
-- LEFT JOIN porque a consulta pode não ter recepcionista)
SELECT c.num_consulta,
TO_CHAR(c.data_hora, 'DD/MM/YYYY HH24:MI') AS data_hora,
a.nome AS animal,
fv.nome AS veterinario,
NVL(fr.nome, 'Aplicativo') AS agendado_por,
c.diagnostico,
c.valor
FROM CONSULTA c
JOIN ANIMAL a ON a.cpf_tutor = c.cpf_tutor
AND a.num_animal = c.num_animal
JOIN FUNCIONARIO fv ON fv.matricula = c.matricula_vet
LEFT JOIN FUNCIONARIO fr ON fr.matricula = c.matricula_recep
ORDER BY c.data_hora;

-- 3.6 Prescrições: qual medicamento foi receitado em cada consulta
SELECT p.num_consulta, a.nome AS animal, m.nome AS medicamento,
p.dosagem, p.frequencia, p.duracao AS dias
FROM PRESCRICAO p
JOIN CONSULTA c ON c.num_consulta = p.num_consulta
JOIN ANIMAL a ON a.cpf_tutor = c.cpf_tutor
AND a.num_animal = c.num_animal
JOIN MEDICAMENTO m ON m.cod_med = p.cod_med
ORDER BY p.num_consulta;

-- 3.7 Quantidade de consultas realizadas por veterinário
SELECT f.nome AS veterinario, v.crmv, COUNT(c.num_consulta) AS qtd_consultas
FROM VETERINARIO v
JOIN FUNCIONARIO f ON f.matricula = v.matricula
LEFT JOIN CONSULTA c ON c.matricula_vet = v.matricula
GROUP BY f.nome, v.crmv
ORDER BY qtd_consultas DESC;

-- 3.8 Espécies sem nenhum animal cadastrado
SELECT e.codigo_especie, e.nome
FROM ESPECIE e
LEFT JOIN ANIMAL a ON a.codigo_especie = e.codigo_especie
WHERE a.cpf_tutor IS NULL;