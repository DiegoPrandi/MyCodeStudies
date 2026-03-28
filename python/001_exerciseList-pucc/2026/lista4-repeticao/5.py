n = int(input('Digite o valor de N: '))
x = int(input('Digite o valor de X: '))
resultado = 1
y = 0

while y < x:
    resultado *= n
    y += 1

print(f'{n}^{x} == {resultado}')
