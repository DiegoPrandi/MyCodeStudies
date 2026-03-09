a = int(input('Digite o valor de a: '))
b = int(input('Digite o valor de b: '))
c = int(input('Digite o valor de c: '))
d = int(input('Digite o valor de d: '))
e = int(input('Digite o valor de e: '))
f = int(input('Digite o valor de f: '))

if a==0 or b==0 or c==0 or d==0:
    print('PARO PARO')
else:
    x = ((c*e) - (b*f)) / ((a*e) - (b*d))
    y = ((a*f) - (c*d)) / ((a*e) - (b*d))
    print(f'x = {x}')
    print(f'y = {y}')

print(c)
c = (a*x) + (b*y)
print(c)
