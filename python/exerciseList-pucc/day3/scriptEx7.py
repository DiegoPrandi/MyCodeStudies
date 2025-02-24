c = float(input('Digite o comprimento do terreno: '))
l = float(input('Digite a largura do terreno: '))
p = float(input('Digite  preço do metro da tela: R$'))

custo = (c*2 + l*2) * p
print(f'O custo total do terreno é R${custo:.2f}')