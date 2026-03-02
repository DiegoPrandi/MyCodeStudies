# Leia o salário mensal atual de um funcionário e o percentual de
# reajuste e determine o valor do novo salário

salario = float(input("Digite se salario: "))
porcentual = float(input("Digite o porcentual de reajuste: "))

salario_ajustado = salario * (porcentual / 100)

print(salario + salario_ajustado)