def list_even_numbers(numbers):
    even_numbers = []
    for i in range(len(numbers)):
        if numbers[i] % 2 == 0:
            even_numbers.append(numbers[i])

    return even_numbers

numbers_list = [1, 2, 3, 4, 5, 6]
print(list_even_numbers(numbers_list))