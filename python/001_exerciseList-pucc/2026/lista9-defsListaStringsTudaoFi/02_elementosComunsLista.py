# Construa um programa
# • Tenha uma função que leia e retorne uma lista de 10 números reais
# • Uma função que tenha receba duas listas e retorne uma lista com os
# elementos em comum dessas duas lista
# O programa deverá ler as duas listas e imprimir as três listas no
# “principal”

def lerLista():
    lista = []
    for i in range(10):
        num = float(input(f'Digite o {i+1}º número: '))
        lista.append(num)
    return lista

def comuns(lista1, lista2):
    resultado = []

    for i in lista1:
        if i in lista2:
            resultado.append(i)

    return resultado

lista1 = lerLista()
lista2 = lerLista()
listaComum = comuns(lista1, lista2)

print("LISTA 1:", lista1)
print("LISTA 2:", lista2)
print("COMUNS :", listaComum)