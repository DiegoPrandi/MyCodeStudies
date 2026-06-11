# Faça um programa que leia uma frase do usuário e mostre quantas vezes cada vogal (a, e, i, o, u) aparece nela,
# de forma separada. Ignore maiúsculas/minúsculas.

frase = input('Digite uma frase: ').lower()
contador = 0
for letra in frase:
    if letra in 'aeiou':
        contador +=1
print(contador)