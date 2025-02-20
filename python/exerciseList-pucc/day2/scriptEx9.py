def sum_2_digit(number):
    x = str(number)
    sum_numbers = 0

    if len(x) > 2:
        print('\nDigite um numero com somente 1 ou 2 digitos.')
        return ''

    for i in range(len(x)):
        sum_numbers += int(x[i])
    return sum_numbers

number = int(input('Digite um numero: '))
print(sum_2_digit(number))
    