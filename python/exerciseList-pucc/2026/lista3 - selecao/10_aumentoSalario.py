salario = int(input('Digite seu salario: '))

if salario <= 1500:
    aumento = salario * 0.15
    salarioNovo = salario + aumento
    print(f'Salario novo ajustado: {salarioNovo}')
elif salario > 1500 and salario <= 3000:
    aumento = salario * 0.10
    salarioNovo = salario + aumento
    print(f'Salario novo ajustado: {salarioNovo}')
else:
    aumento = salario * 0.05
    salarioNovo = salario + aumento
    print(f'Salario novo ajustado: {salarioNovo}')


