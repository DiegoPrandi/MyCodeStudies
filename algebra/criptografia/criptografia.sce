//ALFABETO

T = ['A' 'B' 'C' 'D' 'E' 'F' 'G' 'H' 'I' 'J' 'K' 'L' 'M' 'N' 'O' 'P' 'Q' 'R' 'S' 'T' 'U' 'V' 'W' 'X' 'Y' 'Z'];
NOME = input("Entre com a palavra ser criptografada:")

[m n]=size(NOME)
// VETOR DE ÍNDICES
for i=1:n
    I(:,i)=find(NOME(:,i)==T)
end

// CRIANDO VETORES PARES DE SÍLABAS
for i=1:n/2
    k=2*i-1
    P(:,i)=[I(:,k);I(:,k+1)]
end
//MATRIZ CHAVE
A = [2 1;3 2]
// ENCONTRAR MATRIZ CIFRADA C
C=A*P
C=pmodulo(C,26)
[r s]=size(C)
for i=1:r
    for j=1:s
     if C(i,j)==0 then C(i,j)=26
     else C(i,j)==C(i,j)    
    end   
    end 
end

//EXIBIR O TEXTO CIFRADO
C=C'
for i=1:n/2
    k=2*i-1
    TC(1,[k k+1])=C(i,:)
end
disp(T(1,TC))









