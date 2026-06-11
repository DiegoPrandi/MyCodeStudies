# Leia um nome e modifique os valores associados a esse
# nome, se ele existir no dicionário

# Leia um nome e se ele existir no dicionário imprima os o
# nome e a idade

dicionario = {}

for i in range(1):
    nome = input('Digite um nome: ').capitalize()
    idade = int(input('Digite sua idade: '))
    cidade = input('Digite sua cidade: ')
    dicionario[nome] = [idade, cidade]
    
nomeBuscar = input('\nDigite o nome que deseja buscar: ').capitalize()
if nomeBuscar in dicionario:
    print({nomeBuscar: dicionario[nomeBuscar]})