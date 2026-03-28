# Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre
# um crime. As perguntas são:
# a. "Telefonou para a vítima?"
# b. "Esteve no local do crime?"
# c. "Mora perto da vítima?"
# d. "Devia para a vítima?"
# e. "Já trabalhou com a vítima?"
# O programa deve no final emitir uma classificação sobre a participação da pessoa
# no crime. Se a pessoa responder positivamente a 2 questões ela deve ser
# classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
# Caso contrário, ele será classificado como "Inocente".
import os

def crime_scene():
    pergunta = ['Telefonou para a vítima? ',  'Esteve no local do crime? ', 'Mora perto da vítima? ', 'Devia para a vítima? ', 'Já trabalhou com a vítima? ']
    resposta = []
    sim = 0


    for i in pergunta:
        while True:
            resposta_usuario = input(i).strip().lower() 
            if resposta_usuario in ['sim', 's', 'não', 'nao', 'n']:
                resposta.append(resposta_usuario)
                break
            else:
                print('Digite somente Sim ou Não')
    
    for resp in resposta:
        if resp in ['sim', 's']: 
            sim += 1

    if sim == 2:
        print('Suspeito')
    elif 3 <= sim <= 4:
        print('Cúmplice')
    elif sim == 5:
        print('Assasino')


crime_scene()


