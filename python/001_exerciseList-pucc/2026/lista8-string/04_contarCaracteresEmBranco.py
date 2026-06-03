# Ler uma frase e contar quantos caracteres são espaços em
# brancos.

def lerCaracteresEmBranco():
    frase = input('Digite uma frase: ')
    contador = 0
    for i in frase:
        if i == ' ':
            contador+=1
    print('ESPAÇOS EM BRANCO: ',contador)
lerCaracteresEmBranco()

def lerCaracteresEmBrancoComMetodo():
    frase = input('Digite uma frase: ')
    print('ESPAÇOS EM BRANCO: ', frase.count(' '))

lerCaracteresEmBrancoComMetodo()
