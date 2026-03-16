plano = int(input('Digite seu plano: '))
salario = float('Digite seu salario: ')

if plano == 1:
    salario += 1.10
    print('Novo salario: ', salario)
elif plano == 2:
    salario += 1.15
    print('Novo salario: ', salario)
elif plano == 3:
    salario += 1.20
    print('Novo salario: ', salario)
else:
    print('Digite o numero do plano certo (1 - 2- 3)')