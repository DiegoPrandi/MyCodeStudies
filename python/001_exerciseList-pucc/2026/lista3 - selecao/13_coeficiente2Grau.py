a = int(input('Digite o coeficiente a: '))
b = int(input('Digite o coeficiente b: '))
c = int(input('Digite o coeficiente c: '))

delta = b**2 - 4*a*c

raiz_delta = delta ** 0.5

x1 = (-b + raiz_delta) / (2*a)
x2 = (-b - raiz_delta) / (2*a)

print(f'[{x2:.0f},{x1:.0f}]')
