n = int(input('Digite o numero de habitantes ai fi: '))

i=0
mediaSalario = 0
mediaNumFilhos = 0
maiorSalario = 0
porcentualSalario100 = 0

while i != n:
    salario = int(input('Digite seu soldo: '))
    mediaSalario += salario
    if salario == maiorSalario:
        maiorSalario = salario
    elif salario < 101:
        porcentualSalario100 +=1

    qtdeFilhos = int(input('Digite quantos filhos voce tem: '))
    mediaNumFilhos += qtdeFilhos

    i+=1

print('a')
