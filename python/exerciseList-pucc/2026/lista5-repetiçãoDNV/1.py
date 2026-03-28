intervalo0a25 = 0
intervalo26a50 = 0
intervalo51a75 = 0
intervalo76a100 = 0

n = int(input('Digite um numero:'))
while n >= 0:
    if 0 <= n <= 25:
        intervalo0a25 += 1
    elif 26 <= n <= 50:
        intervalo26a50 += 1
    elif 51 <= n <= 75:
        intervalo51a75 += 1
    elif 76 <= n <= 100:
        intervalo76a100 += 1

    n = int(input('Digite um numero:'))

print('De 0 a 25: ', intervalo0a25)
print('De 26 a 50: ', intervalo26a50)
print('De 51 a 75: ', intervalo51a75)
print('De 76 a 100: ', intervalo76a100)
        
