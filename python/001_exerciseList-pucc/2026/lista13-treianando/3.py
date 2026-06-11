# Leia 8 números inteiros e armazene em uma lista. 
# Calcule e imprima separadamente a soma dos números pares e a soma dos números ímpares da lista.

lista = []
par = 0
impar = 0
for i in range(8):
    n = int(input(f'Digite o {i+1} numero: '))
    lista.append(n)

for i in lista:
    if i % 2 == 0:
        par +=i
    else:
        impar +=i

print('SOMA PAR: ', par)
print('SOMA IMPAR: ', impar)
