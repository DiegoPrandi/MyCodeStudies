# Elabore um programa que faça a simulação de um caixa
# de uma loja.
# O usuário deverá digitar o Valor da Compra, o Valor Pago
# pelo cliente.
# O programa irá retornar o valor do troco, as cédulas que
# fazem parte do troco e a quantidade de cada cédula.
# Para este programa considere as cédulas de R$100,
# R$50, R$20, R$10, R$5 e R$1 real
# Considere a possibilidade de não haver troco
# Veja o Exemplo
# https://prnt.sc/tbD2VRO0qX-X

valor_compra = float(input("Digite o valor da compra: "))
valor_pagamento = float(input("Digite o valor do pagamento: "))

nota100=0
nota50=0
nota20=0
nota10=0
nota5=0
nota1=0
troco = valor_pagamento - valor_compra

print(f"Troco: {troco}")

while troco >= 1:
    if troco >= 100:
        nota100 += 1
        troco -= 100
    elif troco >= 50:
        nota50 += 1
        troco -= 50
    elif troco >= 20:
        nota20 += 1
        troco -= 20
    elif troco >= 10:
        nota10 += 1
        troco -= 10
    elif troco >= 5:
        nota5 += 1
        troco -= 5
    elif troco >= 1:
        nota1 += 1
        troco -= 1

print("Troco EM:")
print(f"R$100 --- {nota100}")
print(f"R$50  --- {nota50}")
print(f"R$20  --- {nota20}")
print(f"R$10  --- {nota10}")
print(f"R$5   --- {nota5}")
print(f"R$1   --- {nota1}")

if troco > 0:
    print(f"Não vai ter como pagar R$ {troco}")



    
