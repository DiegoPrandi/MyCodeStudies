nome = input('Digite seu nome: ')
sexo = input('Digite seu sexo: "M" ou "F"').lower()
while not sexo in ('m', 'f'):
    print('Digite somente "M" ou "F"')
    sexo = input('Digite seu sexo: "M" ou "F"').lower()
idade = int(input('Digite sua idade: '))
if idade < 25 and sexo == 'f':
    print('ACEITA')
