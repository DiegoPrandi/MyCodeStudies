continuar = True
qtdePessoas = int(input('Digite quantas pessoas tem na cidade: '))
contador = 0

somaIdade = 0
somaPeso = 0
somaAltura = 0

idade30a40 = 0
somaFilhos = 0

pessoasAcimaDe100 = 0

while contador != qtdePessoas:
    idade = int(input('Digite sua idade: '))
    somaIdade += idade
    if 30 <= idade <= 40:
        filhos30a40 = int(input('Digite quantos filhos tem: '))
        idade30a40 += 1
        somaFilhos += idade30a40
        
    peso = float(input('Digite seu peso: '))
    somaPeso += peso
    if peso > 100.0:
        pessoasAcimaDe100 += 1
    
    altura = float(input('Digite sua altura: '))
    somaAltura += altura

    contador += 1
    print('*' * 10)
mediaPeso = somaPeso / qtdePessoas
mediaFilhos = 0
if somaFilhos != 0:
    mediaFilhos = somaFilhos / idade30a40
else:
    mediaFilhos = 0
mediaAcimaDe100 = (qtdePessoas /pessoasAcimaDe100) * 100

print('Media Peso: ', mediaPeso)
print('Media Filhos de pessoas entre 30 a 40 anos: ', mediaFilhos)
print('Media Pessoas acima de 100kg: %', mediaAcimaDe100)
    
