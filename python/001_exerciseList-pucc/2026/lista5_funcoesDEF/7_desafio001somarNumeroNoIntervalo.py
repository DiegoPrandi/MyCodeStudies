def somarIntervalo(n1, n2):
    if n1 > n2:
        print('O primeiro numero não pode ser maior que o segundo')
    else:
        soma = 0
        for i in range(n1, n2):
            soma += i
        print(soma)
n1 = int(input('Digite 0 1º numero: '))
n2 = int(input('Digite o 2º numero: '))

somarIntervalo(n1, n2)
