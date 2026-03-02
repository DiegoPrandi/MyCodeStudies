n = int(input('Digite um número inteiro positivo de 3 dígitos: '))

n1 = n // 100
n2 = (n // 10) % 10
n3 = (n // 1)  % 10

if n <= 99 or n > 999:
    print('Digite apenas numeros inteiros positivos de 3 digitos.')
else:
    print(f'Número lido: {n}')
    print(f'Número Gerado: {n3}{n2}{n1}')
