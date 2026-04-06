n = int(input('Digite o valor de N: '))
soma = 1

for i in range(2, n, 3):
    soma *= i
    print('I    - ',i)
    print('Soma - ', soma)
print(soma)

