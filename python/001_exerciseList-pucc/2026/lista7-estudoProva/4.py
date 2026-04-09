def sucessorAntecessor(n):
    sucessor = n + 1
    antecessor = n - 1
    return sucessor, antecessor

numero = int(input('Digite um número inteiro: '))
sucessor, antecessor = sucessorAntecessor(numero)
print(f'O sucessor de {numero} é {sucessor} e o antecessor é {antecessor}.')