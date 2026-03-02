# Faça um programa que dadas as medidas de uma sala em metro
# (comprimento e largura), bem como o preço do metro quadrado
# do carpete, informe o custo total para forrar o piso da sala

comprimento = int(input("Digite o comprimento da sala (em metros): "))
largura = int(input("Digite a largura da sala (em metros): "))
metro = comprimento * largura

preco_do_metroQuadrado = 10
print(f"Custo total para forrar o piso: R${metro * preco_do_metroQuadrado}")
