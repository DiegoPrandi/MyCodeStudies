# Elabore um programa que leia um número inteiro e uma função que
# Elabore um programa que leia um número inteiro e construa duas
# funções: uma que some os dígitos desse número inteiro e outra que
# determine o maior digito desse número. Exemplo: número = 1063,
# então a soma =1+ 0 +6 + 3 =10 e o maior dígito é 6

def funciona(n):
    soma = 0
    maior = 0
    
    while n > 0:
        digito = n % 10
        soma += digito
        if digito > maior:
            maior = digito
        n //= 10
    return soma, maior

numero = int(input('Digite um número inteiro: '))
soma, maior = funciona(numero)
print(f'A soma dos dígitos é {soma} e o maior dígito é {maior}.')