# Faça um programa que receba do usuário uma string. O
# programa imprime a string sem suas vogais


def tirarVogais():
    frase = input('Digite uma frase: ')
    for letra in frase:
        if letra.lower() not in 'aeiou':
            print(letra, end='')
tirarVogais()