# Elabore um programa que dada uma distância percorrida (em
# quilômetros), bem como o total de combustível gasto (em litros),
# informe o consumo do veículo

distancia = float(input("Digite a distancia percorrida (km): "))
combustivel = float(input("Digite o conbustivel gasto (L): "))

consumo = distancia / combustivel

print(consumo)