import numpy as np

def char_to_num(c):
    val = ord(c.upper()) - ord('A') + 1
    return val % 26

def num_to_char(n):
    n = n % 26
    if n == 0:
        return 'Z'
    return chr(n + ord('A') - 1)

def modInverse(a, m):
    for x in range(1, m):
        if (((a % m) * (x % m)) % m == 1):
            return x
    return -1

C = np.array([[4, 3], [1, 2]]) # a matriz que faz acontece kk

det = int(round(np.linalg.det(C)))
det_mod = det % 26
print(f"Determinante: {det}, mod 26: {det_mod}")

det_inv = modInverse(det_mod, 26)
print(f"Inverso modular do determinante (mod 26): {det_inv}")

if det_inv == -1:
    print("A matriz não é inversível em mod 26.")
    exit()

adj = np.array([[C[1,1], -C[0,1]], [-C[1,0], C[0,0]]])
print(f"Matriz Adjunta:\n{adj}")

D = (det_inv * adj) % 26
print(f"Matriz Decodificadora D (mod 26):\n{D}")

msg = "URFJYIJYHT"
nums = [char_to_num(c) for c in msg]
print(f"Mensagem em números: {nums}")

pairs = [nums[i:i+2] for i in range(0, len(nums), 2)]
decoded_nums = []

for pair in pairs:
    v = np.array(pair).reshape(2, 1)
    res = np.dot(D, v) % 26
    decoded_nums.extend(res.flatten())

decoded_msg = "".join([num_to_char(int(n)) for n in decoded_nums])
print(f"Mensagem Decodificada: {decoded_msg}")