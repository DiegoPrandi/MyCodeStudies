n1 = int(input('Digite um numero:'))
n2 = int(input('Digite outro numero:'))

print('Escolha a operacao que quer realizar: ')
print('1 - Média dos numeros')
print('2 - Diferença do maior pelo menor')
print('3 - Produto entrs os números')
print('4 - Divisão do primeiro pelo segundo')
n3 = int(input('Digite a operação que quer realizar: '))

if 1 < n3 > 4:
    print('Digite um numero entre 1 e 4.')
elif n3 == 1:
    n = (n1+n2)/2
    print('Média = ', n)
elif n3 == 2:
    if n1 > n2:
        n = n1-n2
        print('Difereça = ', n)
    else:
        n = n2-n1
        print('Diferença = ', n)
elif n3 == 3:
    n = n1*n2
    print('Produto = ', n)
else:
    if n1 == or n2 == 0:
        print('Para dividir nenhum pode ser 0')
    else:
        n = n1/n2
        print('Divisão = ', n)