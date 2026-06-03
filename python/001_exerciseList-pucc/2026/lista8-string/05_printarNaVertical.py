#  Faça um programa que solicite o nome do usuário e
# imprima-o na vertical

def printarNomeNaVertical():
    nome = input('Digite seu nome: ')
    
    while not nome.replace(' ', '').isalpha():
        print('Digite somente letras no seu nome')
        nome = input('Digite seu nome: ')
    for i in nome:
        print(i)
printarNomeNaVertical()

def printarNomeNaVerticalComJoin():
    nome = input('Digite seu nome: ')

    while not nome.replace(' ', '').isalpha():
        print('Digite somente letras no seu nome')
        nome = input('Digite seu nome: ')
    print('\n'.join(nome))
printarNomeNaVerticalComJoin()