# Escreva um programa que a partir da idade de uma pessoa expressa em anos,
# meses e dias, apresente a idade apenas em dias (considerar o ano com 365 e cada
# mês com 30 dias).

def cacular_idade(anos, meses, dias):
    totalDias = (anos*365) + (meses*30) + dias
    return totalDias

anos = int(input("Digite a idade em anos: "))
meses = int(input("Digite quantos meses: "))
dias = int(input("Digite quantos diass: "))

idade_em_dias = cacular_idade(anos, meses, dias)

print(f"Você tem {idade_em_dias} dias de vida!!!")


