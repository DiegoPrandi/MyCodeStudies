n = int(input('Quanto Numeros: '))

par = 0
impar = 0

for i in range(n):
    x = int(input('Digite um numero: '))
    if x % 2 == 0:
        par += 1
    else:
        impar += 1

print('Pares =   ', par)
print('Impares = ', impar)