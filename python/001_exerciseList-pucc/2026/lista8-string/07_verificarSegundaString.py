# Construa um programa que leia duas strings fornecidas
# pelo usuário e verifique se a segunda string lida está
# contida no final da primeira, imprimindo o resultado da
# verificação.

def verificadorDeStrings():
    string1 = input('Digite alguma coisa: ')
    string2 = input('Digite outra coisa: ')
    
    if string1[-len(string2):] == string2:
        print(True)
    else:
        print(False)

verificadorDeStrings()

def verificadorDeStringsComMetodo():
    string1 = input('Digite alguma coisa: ')
    string2 = input('Digite outra coisa: ')
    
    if string1.endswith(string2):  # ridiculo isso auqi slk kkkkkkkkk
        print(True)
    else:
        print(False)


