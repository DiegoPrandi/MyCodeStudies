def somarDigitosEPegarOMaior(n):
    soma = 0
    maior = 0
    while n > 0:
        digito = n % 10
        print(digito)
        soma += digito
        if digito > maior:
            maior = digito
        n = n // 10
        print(n)
    print('Soma: ', soma)
    print('Maior: ', maior)

n = int(input('Digite um numero: '))
somarDigitosEPegarOMaior(n)
