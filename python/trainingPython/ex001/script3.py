# Escreva um programa para ler o número total de eleitores de um município, o
# numero de votos brancos, nulos e válidos. Apresente a percentagem que cada
# um representa em relação ao total de eleitores.

votosBrancos = int(input("Digite a quantidade de votos brancos: "))
votosNulos = int(input("Digite a quantidade de votos nulos: "))
votosValidos = int(input("Digite a quantidade de votos validos: "))
total = votosBrancos + votosNulos + votosValidos

print(f"Porcentagem de cada voto: ")
print(f"\nBrancos --- {(votosBrancos / total) * 100:.2f}%")
print(f"Nulos   --- {(votosNulos    / total) * 100:.2f}%")
print(f"Válidos --- {(votosValidos / total) * 100:.2f}%")
print(f"Total   --- {total}")


