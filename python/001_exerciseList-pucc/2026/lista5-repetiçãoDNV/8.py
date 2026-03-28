n = int(input("Digite N: "))

a = 2
b = 3
soma = 0

for i in range(n):
    soma = soma + a        
    proximo = a + b        
    a = b                  
    b = proximo

print("Soma =", soma)
