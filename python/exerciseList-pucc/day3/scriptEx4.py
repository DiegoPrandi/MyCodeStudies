dias = int(input("Digite o número de dias trabalhados: "))
porDia = dias * 30
impostoDeRenda = porDia * 0.08
valorFinal = porDia - impostoDeRenda

print(f"Quantia líquida a ser paga: R${valorFinal:.2f}")
