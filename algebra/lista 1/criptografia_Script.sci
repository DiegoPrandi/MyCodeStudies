T = ['A' 'B' 'C' 'D' '' 'E' 'F' 'G' 'H' 'I' 'J' 'K' 'L' 'M' 'N' 'O' 'P' 'Q' 'R' 'S' 'T' 'U' 'V' 'W' 'X' 'Y' 'Z']
 
NOME = input("Entre com a palavra a ser criptografada: ")
 
[m n] = size(NOME)
// ["A" "B" "A" "C" "A" "T" "E"]
// vetor de indices
for i=i:n
    I(1,i)=find(NOME(:,i)==T)
    P(:,i)=[I(k);I(k+1)]
end
// matriz chave
A = [2 1; 3 2]
C = A*P
C = pmodulo(C,26)
[r s] = size(c)
for i=1:r
    for i=1:s
        if C(i,j)==0 then C(i,j)=26
        else C(i,j)=C(i,j);
        end
    end
end

C=C'
for i=1:(n/2)
    k=2*i-1
    TC(1,[k k+1])-C(i,:)
end
disp(T(1,TC))




