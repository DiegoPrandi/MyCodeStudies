idade = int(input('Digite sua idade: '))
kg = float(input('Digite quanto kg pesa: '))

if idade < 18:
    print('Categoria Juvenil')
elif idade >=18 and kg <= 80.0:
    print('Peso Médio')
else:
    print('Peso pesado')
