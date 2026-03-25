// vetor alfabeto (removi o vazio)
T = ['A' 'B' 'C' 'D' 'E' 'F' 'G' 'H' 'I' 'J' 'K' 'L' 'M' ...
     'N' 'O' 'P' 'Q' 'R' 'S' 'T' 'U' 'V' 'W' 'X' 'Y' 'Z']

NOME = input("Entre com a palavra a ser criptografada: ", "string")

[m n] = size(NOME)

// vetor de indices
for i = 1:n
    I(1,i) = find(T == NOME(i))
end

// montagem da matriz P
for i = 1:(n/2)
    k = 2*i - 1
    P(:,i) = [I(k); I(k+1)]
end

// matriz chave
A = [2 1; 3 2]

C = A * P
C = pmodulo(C,26)

[r s] = size(C)

// ajuste dos zeros
for i = 1:r
    for j = 1:s
        if C(i,j) == 0 then
            C(i,j) = 26
        else
            C(i,j) = C(i,j)
        end
    end
end

C = C'

// reconstrução
for i = 1:(n/2)
    k = 2*i - 1
    TC(1,[k k+1]) = C(i,:)
end

disp(T(TC))
