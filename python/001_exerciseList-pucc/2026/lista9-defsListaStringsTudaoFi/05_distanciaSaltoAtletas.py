# Em uma competição de salto em distância cada atleta tem
# direito a cinco saltos. O resultado do atleta será determinado
# pela média dos cinco valores restantes. Você deve fazer um
# programa que receba o nome do atleta e as cinco distâncias
# alcançadas pelo atleta em seus saltos e armazene o nome, os
# saltos e a média dos saltos. O programa deve inserir tantos
# nomes quanto o usuário desejar e imprimir o nome dos 3
# alunos com maior média

def lerNomeAtleta():
    nome = input('Digite o nome do atleta: ')
    while not nome.replace(' ', '').isalpha():
        print('Digite um nome valido')
        nome = input('Digite o nome do atleta: ')
    return nome

def lerSaltos():
    listaSaltos = []
    for i in range(5):
        distancia = float(input(f'Digite a distancia do {i+1}° salto: '))
        listaSaltos.append(distancia)
    return listaSaltos

def media(listaSaltos):
    return sum(listaSaltos) / len(listaSaltos)

def main():
    atletas = []
    qtdeNomes = input('Quantos atletas serão computados: ')
    while not qtdeNomes.isdigit():
        print('Digite uma quantidade valida de atletas')
        qtdeNomes = input('Quantos atletas serão computados :')
    qtdeNomes = int(qtdeNomes)
    for i in range(qtdeNomes):
        print(f'\n{i+1}° ATLETA')
        nome = lerNomeAtleta()
        saltos = lerSaltos()
        mediaValor = media(saltos)
        
        atleta = [mediaValor, nome, saltos, ]
        atletas.append(atleta)

    atletas.sort(reverse=True)
    print('\nTOP 3')
    for i in range(min(3, len(atletas))):
        print(f'{i+1}° -> {atletas[i][1]:20} - {atletas[i][0]}')
main()