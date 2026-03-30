def fatorial(n):
    fatorial = 1
    for i in range(1, n+1):
        fatorial *= i
    n = fatorial
    print(n)

n1 = int(input('Digite o 1° numero: '))
n2 = int(input('Digite o 2° numero: '))
n3 = int(input('Digite o 3° numero: '))

fatorial(n1)
fatorial(n2)
fatorial(n3)
