# Faça um programa que leia o nome e sobrenome de uma pessoa o
# programa deve escrever o nome e o sobrenome numa única
# string. Deverá ser impresso, a nova string, o tamanho dela a
# primeira e a última letra da string

def juntarNomeESobrenome():
    nome = input('Digite seu nome: ')
    sobrenome = input('Digite seu sobrenome: ')
    
    nomeCompleto = nome + ' ' + sobrenome
    while not nomeCompleto.replace(' ', '').isalpha():
        print('Digite somente letras no seu nome e sobrenome, arrego')
        nome = input('Digite seu nome: ')
        sobrenome = input('Digite seu sobrenome: ')
        
        nomeCompleto = nome + ' ' + sobrenome
        
    
    print('NOME COMPLETO  :', nomeCompleto)
    print('TAMANHO NOME   :', len(nomeCompleto))
    print('PRIMEIRA STRING:', nomeCompleto[0])
    print('ULTIMA STRING  :', nomeCompleto[-1])
juntarNomeESobrenome()