salario = float(input("Digite se salario: "))
porcentual = float(input("Digite o porcentual de reajuste: "))

salario_ajustado = salario * (porcentual / 100)

print(f'Salário antigo: \t\t{salario}')
print(f'Porcentual de reajuste (R$):    {salario_ajustado}')
print(f'Salario ajustado:\t \t{salario + salario_ajustado}')