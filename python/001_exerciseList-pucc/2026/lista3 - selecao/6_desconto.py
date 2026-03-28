n1 = int(input('Digite o preço do produto: '))

if n1 > 100:
    desconto = n1 * 0.10
    n2 = n1 - desconto
    print(f'O desconto é de R${desconto}, e o valor final')
    print(f'é de R${n2}')
