n = int(input('Digite um numero: '))

par = 0
impar = 0
somaPar = 0
media =0

while n > 0:
    if n == 0:
        break
    else:
        if n%2 == 0:
            par +=1
            somaPar += n
            media += n
        else:
            impar +=1
            media += n
        n = int(input('Digite um numero: '))

mediaPar = 0
mediaTotal =0
if par!=0:
    mediaPar = somaPar/par
parImpar = par + impar
if parImpar!=0:
    mediaTotal = media / parImpar

print('Pares:       ', par)
print('Impares:     ', impar)
print('Média Par :  ', mediaPar)
print('Média Total: ', mediaTotal)
    
