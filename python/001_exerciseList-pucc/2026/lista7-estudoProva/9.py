# Um número é perfeito se a soma dos seus divisores, com exceção dele
# mesmo, é igual a ele. Exemplo: número 6, os divisores de 6 são 1, 2,
# 3 e 6. Somando-se 1 + 2 + 3 =6. Portanto 6 é um número perfeito.
# Elabore um programa que leia um número e usando uma função
# determine se ele é perfeito

def eh_perfeito(n):
    if n < 2:
        return False
    
    soma_divisores = 0
    for i in range(1, n):
        if n % i == 0:
            soma_divisores += i
    
    return soma_divisores == n

numero = int(input('Digite um número inteiro: '))
if eh_perfeito(numero):
    print(f'{numero} é um número perfeito.')
else:
    print(f'{numero} não é um número perfeito.')