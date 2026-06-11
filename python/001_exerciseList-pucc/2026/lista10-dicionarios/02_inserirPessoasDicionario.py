# Considerando a chave como sendo nome, e os valores
# idade e cidade. Faça com que 10 elementos sejam
# inseridos via teclado nesse dicionário

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

def main():
    pessoas = {}  

    for i in range(2):
        print(f'\n{i+1}° PESSOA')

        nome = lerNome()
        idade = lerIdade()
        cidade = lerCidade()

        pessoas[nome] = {
            'idade': idade,
            'cidade': cidade
        }

    print(pessoas)


main()

