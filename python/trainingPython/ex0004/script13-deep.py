def isPalindrome(word):
    word = word.lower()
    return word == word[::-1]
    
word = input('Digite uma palavra: ')
print(isPalindrome(word))