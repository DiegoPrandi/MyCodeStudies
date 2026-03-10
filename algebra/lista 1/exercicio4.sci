// ex 4
for i=1:10
    for j=1:6
        if i>j then A(i,j)= 2*i
        elseif i<j
            A(i,j)=i+j
        elseif i==j
            A(i,j)=i-1    
        end
     end
end
disp('A = ')
disp(A)
printf('soma elem 1ª Linha = %f\n', sum(A(1,:)))
printf('proximo da 4ª coluna = %f\n', max(A(:,4)))
indice1=find(A(:,4)==max(A(:,4)))
printf('minimo da 2ª linha = %f\n', min(A(2,:)))
indice2=find(A(2,:)==min(A(2,:)))
