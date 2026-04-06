import numpy as np

A = np.array([
    [1, -2, 3, 7],
    [2, 1, 1, 4],
    [-3, 2, -2, -10]
], dtype=float)
a = -2
b = 3
A[1] = A[1] + a * A[0]
A[2] = A[2] + b * A[0]

# v da iteracao 
e = A[1, 1]
f = A[1, 2]
g = A[2, 1]
h = A[2, 2]

# m/n = 4/5
m = 4
n = 5
A[2] = A[2] + (m/n) * A[1]

# matriz resultante 
# [[ 1, -2,  3, |  7 ]
#  [ 0,  e,  f, | -10]
#  [ 0,  0,  p, |  q ]]
p = A[2, 2]
q = A[2, 3]

print(f"Valores da 2ª Iteração: p = {p}, q = {q}")

#  p*z = q
z = q / p

#  e*y + f*z = -10
y = (-10 - f * z) / e

#  1*x - 2*y + 3*z = 7
x = (7 + 2 * y - 3 * z) / 1

print(f"\nResolução de trás para frente:")
print(f"z = {z}")
print(f"y = {y}")
print(f"x = {x}")

# Verificação final
print("\nMatriz Escalonada Final:")
print(A)