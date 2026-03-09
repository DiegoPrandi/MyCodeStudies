lado1 = int(input('Digite o tamanho do lado 1 do triangulo: '))
lado2 = int(input('Digite o tamanho do lado 2 do triangulo: '))
lado3 = int(input('Digite o tamanho do lado 3 do triangulo: '))

if lado1 + lado2 < lado3 and lado2 + lado3 < lado1 and lado3 + lado1 < lado2:
    print('Não é um triangulo isso ai não fi, ta chapando')
else:
    if lado1 == lado2 and lado2 == lado3:
        print('É um triangulo Equilátero')
    elif lado1 == lado2 or lado2 == lado3 or lado1 == lado3:
        print('É um triangulo Isóceles')
    else:
        print('É um triangulo Escaleno')
        
