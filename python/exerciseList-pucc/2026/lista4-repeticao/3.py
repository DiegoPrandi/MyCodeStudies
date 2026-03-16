a = int(input('A = '))
b = int(input('B = '))
c = int(input('C = '))


if a <= b and a <= c:
    if b <= c:
        print(a, b, c)
    else:
        print(a, c, b)
elif b <= a and b <= c:
    if a <= c:
        print(b, c, a)
    else:
        print(a, c, b)
elif c <= a and c <= b:
    if a <= b:
        print(c, a, b)
    else:
        print(c, b, a)

    