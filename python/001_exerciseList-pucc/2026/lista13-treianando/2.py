# Leia uma palavra e informe se ela é um palíndromo (se lida de trás para frente é igual). 
# Ignore espaços e case. Valide que a entrada contém apenas letras.

palavra = input('Digite uma palavra: ')
palavra.replace(' ', '')
while not palavra.isalpha():
    print('Digite uma palabra valida')
    palavra = input('Digite uma palavra: ')
if palavra == palavra[::-1]:
    print('PALINDROMO')
else:
    print('NAO E PALINDROMO')