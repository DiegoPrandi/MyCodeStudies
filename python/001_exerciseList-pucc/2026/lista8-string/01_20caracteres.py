# Faça um programa que lê uma string de no máximo 20 caracteres
# e no final imprime quantas letras ‘a’ tem essa strin
def leitorDeString():
    string = input('Digite alguma coisa: ')

    while len(string) > 20:
        print('O limite máximo é de 20 caracteres.')
        string = input('Digite alguma coisa: ')

    contador = 0

    for letra in string:
        if letra == 'a':
            contador += 1

    if contador == 0:
        print('Sua frase não tem nenhuma letra "a".')
    else:
        print(f'Sua frase tem {contador} letra(s) "a".')

leitorDeString()

def lerStrinComMetodo():
    string = input('Digite alguma coisa: ')

    while len(string) > 20:
        print('O limite máximo é de 20 caracteres.')
        string = input('Digite alguma coisa: ')
        
    print(f'A string tem {string.count('a')} letra(s) "a"')
    
lerStrinComMetodo()