maior = 0
menor = 0

for i in range(10):
    x = int(input(f'Digite o {i+1}º número: '))
    
    if i == 0:
        maior = x
        menor = x
    else:
        if x > maior:
            maior = x
        elif x < menor:
            menor = x
        
print('Maior = ', maior)
print('Menor = ', menor)
