n = int(input('Digite um numero de 3 digito: '))

n1 = n // 100
n2 = ( n // 10 ) % 10
n3 = ( n // 1 ) % 10


print(f'Número lido: {n}')
print(f'Número gerado: {n3}{n2}{n1}')