salario = float(input('Digite o salario: '))

if salario < 500.0:
    reajuste = salario * 0.15
    v_Final = salario + reajuste
    print(f'Salario reajustado: {v_Final}')
elif salario >= 500.0 and salario <= 1000.0:
    reajuste = salario * 0.10
    v_Final = salario + reajuste
    print(f'Salario reajustado: {v_Final}')
else:
    reajuste = salario * 0.05
    v_Final = salario + reajuste
    print(f'Salario reajustado: {v_Final}')

