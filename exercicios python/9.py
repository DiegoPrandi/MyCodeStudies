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



    
