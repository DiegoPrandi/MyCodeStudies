def intervalo(a, b):
    if a > b:
        a, b = b, a
    
    if a % 2 != 0:
        a += 1  
    
    for i in range(a, b + 1, 2):
        print(i, end=', ')

a = int(input('Digite um valor de a: '))
b = int(input('Digite um valor de b: '))
intervalo(a, b)