# O Zodíaco chinês é composto por animais com ciclo de 12 anos. Uma
# maneira simplificada de identificá-lo é verificando-se apenas o ano de seu
# nascimento do seguinte modo:
# https://prnt.sc/UrvxxQ47RaP0

def chinese_zodiac(yearBirth):
    signo = ['Macaco', 'Galo', 'Cão', 'Porco', 'Rato', 'Boi', 'Tigre', 'Coelho', 'Dragão', 'Serpente', 'Cavalo', 'Carneiro']
    return signo[yearBirth % 12]  

yearBirth = int(input("Digite seu ano de nascimento: "))
print(chinese_zodiac(yearBirth)) 


