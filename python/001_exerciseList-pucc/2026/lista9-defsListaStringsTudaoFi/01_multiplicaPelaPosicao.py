#  Elabore um programa que:
# • Construa uma função que leia e retorne uma lista com 10 elementos
# inteiros
# • Construa uma função que modifique uma lista multiplicando seus
# elementos por sua posição

def lerLista():
    lista = []

    for i in range(10):
        num = input(f'Digite o {i+1}º número: ')

        while not num.isdigit():
            print('Digite um número válido')
            num = input(f'Digite o {i+1}º número: ')

        lista.append(int(num))

    return lista


def multiplicarPelaPosicao(lista):
    for i in range(len(lista)):
        lista[i] *= i

    print(lista)
    return lista


lista = lerLista()
multiplicarPelaPosicao(lista)
