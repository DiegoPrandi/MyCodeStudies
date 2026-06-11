# Leia um nome e modifique os valores associados a esse
# nome, se ele existir no dicionário

# Leia um nome e se ele existir no dicionário imprima os o
# nome e a idade

def lerNome():
    nome = input('Digite seu nome: ')
    while not nome.replace(' ', '').isalpha():
        print('Digite seu nome certo rapaiz')
        nome = input('Digite seu nome: ')
    return nome

def lerIdade():
    idade = input('Digite sua idade: ')
    while not idade.isdigit():
        print('Arrego, digita a idade certa')
        idade = input('Digite sua idade: ')
    return int(idade)

def lerCidade():
    cidade = input('Digite sua cidade: ')
    while not cidade.replace(' ', '').isalpha():
        print('Digite sua cidade certa rapaiz')
        cidade = input('Digite sua cidade: ')
    return cidade

def removerPessoa(pessoas):
    nome = input('\nDigite o nome da pessoa que deseja remover: ')

    while not nome.replace(' ', '').isalpha():
        print('Digite o nome certo rapaiz')
        nome = input('Digite o nome da pessoa que deseja remover: ')

    if nome:
        pessoas.pop(nome)
        print(pessoas)
    else:
        print('Nenhuma pessoa encontrada')

def main():
    pessoas = {}  

    print('ADICIONE 2 PESSOAS')
    for i in range(2):
        print(f'\n{i+1}° PESSOA')

        nome = lerNome()
        idade = lerIdade()
        cidade = lerCidade()

        pessoas[nome] = [idade, cidade]

    nome = removerPessoa(pessoas)
    

main()
