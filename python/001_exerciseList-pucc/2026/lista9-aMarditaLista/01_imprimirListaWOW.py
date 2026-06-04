# Construa um programa em Python que receba uma lista de 10
# inteiros, via teclado e imprima toda a lista na mesma linha


def printListaKK():
    lista = []

    for i in range(1,11):
        num = input(f'Digite o {i}° numero: ')

        while not num.isdigit(): 
            print('Digite somente numeros validos')
            num = input(f'Digite o {i}° numero: ')

        lista.append(int(num))

    print(' '.join(lista))

printListaKK()