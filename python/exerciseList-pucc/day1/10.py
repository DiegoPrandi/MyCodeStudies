def caixa_de_loja(compra, pagamento):
    troco = pagamento - compra
    
    if troco < 0:
        return "O valor pago é insuficiente para cobrir a compra."

    print(f"Troco: R${troco}")

    cédulas = [100, 50, 20, 10, 5, 1]

    quantidade_cédulas = {}

    for cédula in cédulas:
        quantidade = troco // cédula  
        quantidade_cédulas[cédula] = quantidade 
        troco %= cédula 

    
    return quantidade_cédulas

valor_compra = int(input("Digite o valor da compra: R$"))
valor_pagamento = int(input("Digite o valor do pagamento: R$"))

resultado = caixa_de_loja(valor_compra, valor_pagamento)

for cédula, quantidade in resultado.items():
    print(f"Cédulas de R${cédula}: {quantidade} unidades")

