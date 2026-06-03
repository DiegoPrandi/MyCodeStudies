# Faça um programa que leia um nome e imprima as 4
# primeiras letras do nome.

def printar4PrimeirasLetras():
    nome = input('Digite seu nome: ')
    while not nome.replace(' ', '').isalpha():
        print('Digite somente letras no seu nome')
        nome = input('Digite seu nome: ')
        
    print(nome[:4])
printar4PrimeirasLetras()
    