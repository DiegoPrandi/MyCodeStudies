def intervalo(a, b):
    if a > b:
        c = b
        b = a
        a = c    
    for i in range(a, b):
        if i % 2 == 0:
            print(i)
a = int(input('Digite um valor de a: '))
b = int(input('Digite um valor de b: '))
intervalo(a, b)
