# Leia uma frase e imprima cada palavra da frase invertida, mantendo a ordem das palavras. 
# Exemplo: "Python é top" → "nohtyP é pot".

frase = input('Digite uma frase: ')
palavras = frase.split()
for i in palavras:
    print(i[::-1], end=' ')