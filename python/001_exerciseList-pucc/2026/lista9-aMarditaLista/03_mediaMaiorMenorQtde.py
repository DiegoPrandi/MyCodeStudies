# Elabore um programa que leia e armazene 10 números reais, o
# programa deverá informar
# • A média dos elementos
# • O maior e o menor elemento
# • A quantidade de números maiores que 29.
# • Imprimir a lista lida

def mediaMaiorMenorQtde():
    lista = []
    for i in range(1, 11):
        num = float(input(f'Digite o {i}° numero: '))
        lista.append(num)

    media = sum(lista) / len(lista)
    maior = max(lista)
    menor = min(lista)
    maior29 = sum(1 for x in lista if x > 29)

    print('MEDIA : ', media)
    print('MAIOR : ', maior)
    print('MENOR : ', menor)
    print('> 29  : ', maior29)
    print('LISTA : ', lista)

mediaMaiorMenorQtde()
