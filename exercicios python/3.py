salario = float(input("Digite se salario: "))
porcentual = float(input("Digite o porcentual de reajuste: "))

salario_ajustado = salario * (porcentual / 100)

print(salario + salario_ajustado)