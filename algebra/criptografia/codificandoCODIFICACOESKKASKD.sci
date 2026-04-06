A = [4 3; 1 2];

// H=8, E=5 | L=12, L=12 | O=15, W=23 | O=15, R=18 | L=12, D=4
M = [8 12 15 15 12; 5 12 23 18 4]; 

C = pmodulo(A * M, 26);

alfabeto = "ZABCDEFGHIJKLMNOPQRSTUVWXY";

letras_cifradas = "";
for j = 1:5
    for i = 1:2
        index = C(i,j) + 1; // +1 porque a string no Scilab começa no índice 1
        letras_cifradas = letras_cifradas + part(alfabeto, index);
    end
end

disp("Texto Criptografado (A=1):", letras_cifradas)
