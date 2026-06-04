# Utilizando listas faça um programa que faça 5 perguntas para uma
# pessoa sobre um crime. As perguntas são:
# • "Telefonou para a vítima?"
# • "Esteve no local do crime?"
# • "Mora perto da vítima?"
# • "Devia para a vítima?"
# • "Já trabalhou com a vítima?"
# O programa deve no final emitir uma classificação sobre a
# participação da pessoa no crime. Se a pessoa responder
# positivamente a 2 questões ela deve ser classificada como
# "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
# Caso contrário, ele será classificado como "Inocente".

def validarResposta(msg):
    pergunta = input(msg).lower()
    while pergunta not in ('s', 'sim', 'n','nao', 'não' ):
        print('Responde certo boca aberta')
        pergunta = input(msg).lower()

    return 1 if pergunta in ('s', 'sim') else 0

def main():
    p1 = validarResposta('Telefonou para a vítima? ')
    p2 = validarResposta('Esteve no local do crime? ')
    p3 = validarResposta('Mora perto da vítima? ')
    p4= validarResposta('Devia para a vítima? ')
    p5 = validarResposta('Já trabalhou com a vítima? ')
    
    soma = sum([p1, p2, p3, p4, p5])

    if soma == 2:
        print('\nSuspeita')
    elif 3 <= soma <= 4:
        print('\nCúmplice')
    elif soma == 5:
        print('\nAssassino')
    else:
        print('\nInocente')