def somaIntevalo (a, b):
    if a > b:
        a, b = b, a
    
    quantidade = b -a + 1
    return (a + b) * quantidade // 2

a = int(input('Digite um valor de a: '))
b = int(input('Digite um valor de b: '))
print(somaIntevalo(a, b))