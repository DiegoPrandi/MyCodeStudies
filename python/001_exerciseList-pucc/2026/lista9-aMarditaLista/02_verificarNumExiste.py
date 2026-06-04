# Construa um programa em Python que receba uma lista de 15
# inteiros, via teclado e um número. O programa deve informar se
# o número existe ou não na lista

def verificarNumExiste():
    lista = []

    numVerificar = input('Digite um numero: ')
    while not numVerificar.isdigit():
        print('Digite somente numeros validos')
        numVerificar = input('Digite um numero: ')

    for i in range(1, 16):
        num = input(f'Digite o {i}° numero: ')

        while not num.isdigit():
            print('Digite somente numeros validos')
            num = input(f'Digite o {i}° numero: ')

        lista.append(num)

    if numVerificar in lista:
        print(True)
    else:
        print(False)

verificarNumExiste()