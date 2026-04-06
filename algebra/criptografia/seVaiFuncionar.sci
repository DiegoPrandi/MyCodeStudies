
A = zeros(3, 4);

for i = 1:3
    for j = 1:4
        if i < j then
            A(i,j) = j + 1;
        elseif i > j then
            A(i,j) = i + j;
        else // Caso i == j
            A(i,j) = 2 * i;
        end
    end
end

disp("Matriz A:", A)

soma_linha2 = sum(A(2, :))
soma_coluna3 = sum(A(:, 3))

printf("\na) Soma dos elementos da 2a linha = %g", soma_linha2)
printf("\nb) Soma dos elementos da 3a coluna = %g\n", soma_coluna3)
