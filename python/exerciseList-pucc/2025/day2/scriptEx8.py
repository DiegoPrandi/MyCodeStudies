produto = float(input("Digite o valor do produto: "))
porcentagem = float(input("Digite a porcentagem de desconto: "))

porcentagem_desconto = produto * (porcentagem / 100)

print(f'Preço antigo: \t\t\t{produto}')
print(f'Porcentagem de desconto (R$):    {porcentagem_desconto}')
print(f'Produto ajustado:\t\t {produto - porcentagem_desconto}')