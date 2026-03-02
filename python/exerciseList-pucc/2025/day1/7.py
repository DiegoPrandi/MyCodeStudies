# O índice de massa corpórea (IMC) de uma pessoa é igual ao peso
# (em quilogramas) dividido pelo quadrado de sua altura (em
# metros). Construa um programa que dados o peso e altura de
# uma pessoa, informe o valor de seu IMC

peso = float(input("Digite seu peso (kg): "))
altura = float(input("Digite sua altura (m): "))

imc = peso / (altura**2)

print(imc)