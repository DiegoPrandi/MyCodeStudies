import os
while True:
    os.system('cls')
    print('Calculadora')
    print('1 - adição')
    print('2 - subtração')
    print('3 - multiplicação')
    print('4 - divisão')
    print('5 - sair')

    n = int(input('Digite a operação desejada: '))
    num1 = float(input('Digite o primeiro número: '))
    if n == 4 and num1 == 0:
        while True:
            print('O primeiro número não pode ser zero para divisão')
            num1 = float(input('Digite o primeiro número: '))
            if num1 != 0:
                break 
    num2 = float(input('Digite o segundo número: '))

    if n == 1:
        print(num1 + num2)
        input('Pressione Enter para continuar...')
    elif n == 2:
        print(num1 - num2)
        input('Pressione Enter para continuar...')
    elif n == 3:
        print(num1 * num2)
        input('Pressione Enter para continuar...')
    elif n == 4:
        print(num1 / num2)
        input('Pressione Enter para continuar...')
    elif n == 5:
        print('GoodBye')
        break
    else:
        print('Operação inválida')
        input('Pressione Enter para continuar...')