def isPalindrome(n: int) -> bool:
    if n < 0:
        return False
    return n == int(str(n)[::-1])

print(isPalindrome(1212))
print(isPalindrome(121))
print(isPalindrome(232))
print(isPalindrome(12322))    

    


