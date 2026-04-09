def fatorial(n):
    fat = 1
    for i in range(2, n+1):
        fat *= i
    return fat

print('\n'.join(f'O fatorial de {num} é {fatorial(num)}'
      for num in [int(input(f'Digite o {i}° número: ')) for i in range(1, 4)]))