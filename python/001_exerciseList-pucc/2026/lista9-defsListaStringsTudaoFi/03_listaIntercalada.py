# Elabore um programa que leia duas listas de inteiros e gere uma lista
# que é composta pelos elementos intercalados dessas listas. Trabalhe
# com funções.

def lerLista():
    lista = []

    for i in range(5):
        num = input(f'Digite o {i+1}º número: ')

        while not num.isdigit():
            print('Digite um número válido')
            num = input(f'Digite o {i+1}º número: ')

        lista.append(int(num))

    return lista

def listaIntercalada(lista1, lista2):
    intercalada = []
    tamanho = min(len(lista1), len(lista2))
    # l1 = [1, 2, 3, 4]
    # l2 = [1, 2]
    for i in range(tamanho): # 2
        intercalada.append(lista1[i])
        intercalada.append(lista2[i])
        # intercalada = [1, 1, 2, 2]

    for i in range(tamanho, len(lista1)): # 2 a 4
        intercalada.append(lista1[i])

    for i in range(tamanho, len(lista2)): # 2 a 2 inicio == fim, nao vai 
        intercalada.append(lista2[i])

    # essa validacoes aqui fodase pq eu to usando
    # lista com tamanhos iguais, mas se fossem
    # diferentes elas fazem sentido essas validacoes 
    return intercalada

lista1 = lerLista()
lista2 = lerLista()
lista3 = listaIntercalada(lista1, lista2)
print(lista3)
