# Em uma competição de salto em distância cada atleta tem
# direito a cinco saltos. O resultado do atleta será determinado
# pela média dos cinco valores restantes. Você deve fazer um
# programa que receba o nome do atleta e as cinco distâncias
# alcançadas pelo atleta em seus saltos e armazene o nome, os
# saltos e a média dos saltos. O programa deve inserir tantos
# nomes quanto o usuário desejar e imprimir o nome dos 3
# alunos com maior média

atletas = []
qtdeAtletas = int(input('Quantos atletas serão computados? '))
for i in range(qtdeAtletas):
    print(f'ATLETA NUM: {i+1}')
    nomeAtleta = input('Digite o nome do atleta: ')
    saltos = []
    for i in range(5):
        distanciaSalto = float(input(f'Digite a distancia do {i+1} salto: '))
        saltos.append(distanciaSalto)
    media = sum(saltos) / 5
    
    atleta =[media, nomeAtleta, saltos]
    atletas.append(atleta)

atletas.sort(reverse=True)

print('\nTOP3')
for i in range(min(3, len(atletas))):
    print(f'{i+1} -> {atletas[i][1]} {atletas[i][0]} ')