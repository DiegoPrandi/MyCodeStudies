# Elabore um programa que leia nome, sexo e idade de um
# usuário. Se sexo for feminino e idade menor que 25,
# imprime o nome da pessoa e a palavra “ACEITA”, caso
# contrário imprimir “NÃO ACEITA”.

def lerNome():
    nome = input('Digite seu nome: ')
    while not nome.replace(' ', '').isalpha():
        print('Digite somente letras no seu nome')
        nome = input('Digite seu nome: ')
    return nome

def lerSexo():
    sexo = input('Digite seu sexo "M" ou "F": ')
    while sexo.lower() not in ('m', 'f'):
        print('Digite somente "M" ou "F"')
        sexo = input('Digite seu sexo "M" ou "F": ')
    return sexo

def lerIdade():
    idade = int(input('Digite sua idade: '))
    while not idade.isdigit(): # so pra nao quebra o codigo so pra pã
        print('Digite sua idade corretamente')
        idade = int(input('Digite sua idade: '))
    return idade

def validacao(nome, sexo, idade):
    if sexo.lower() == 'f' and idade < 25:
        print(nome, 'ACEITA')
    else:
        print('NÃO ACEITA')

nome = lerNome()
sexo = lerSexo()
idade = lerIdade()

validacao(nome, sexo, idade)


