def piramide(tamanho):

    for i in range(1, tamanho +1):
        print((str(i) + ' ') * i)

n = int(input('Digite um num: '))

piramide(n)
