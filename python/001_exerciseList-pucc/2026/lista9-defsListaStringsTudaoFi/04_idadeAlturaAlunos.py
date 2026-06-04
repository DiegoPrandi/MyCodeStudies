# Construa um programa que leia uma lista que leia a idade e altura de
# 10 alunos. O programa deverá determinar quantos com mais de 20
# anos possuem altura inferior a media da altura desses 10 alunos

def lerIdade():
    idade = input(f'Digite a IDADE do aluno: ')
    while not idade.isdigit():
        print('Digite uma IDADE valida.')
        idade = input(f'Digite a IDADE do aluno:')
    idade = int(idade)
    return idade

def lerIdadeAltura():
    lista = []
    for i in range(10):
        print(f'\nAluno {i+1}°')

        idade = lerIdade()
        altura = float(input(f'Digite a ALTURA do aluno: '))

        lista.append([idade, altura])

    return lista

def definirMedia(lista):
    media = sum(altura for _, altura in lista) / len(lista)
    return media

def maior20anosAlturaInferiorAMedia(lista, media):
    maior20 = sum(1 for idade, altura in lista if idade > 20 and altura < media)
    return maior20
        

lista = lerIdadeAltura()
media = definirMedia(lista)
resultado = maior20anosAlturaInferiorAMedia(lista, media)

print("MEDIA ALTURA        : ", media)
print("> 20 E MENOR Q MEDIA: ", resultado)