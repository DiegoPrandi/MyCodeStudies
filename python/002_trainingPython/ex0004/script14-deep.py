def biggest_str(strings):
    if not strings: return None

    longest = strings[0]
    for str in strings:
        if len(str) > len(longest):
            longest = str
    return longest

strings = ['doce', 'leite', 'paralelepipedo', 'abacate' ]
print(biggest_str(strings))