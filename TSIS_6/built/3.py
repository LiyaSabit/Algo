def palindrome(s):
    left = 0
    right = len(s)-1
    while right >= left:
        if s[right] != s[left]:
            return "Not Palindrome"
        left+=1
        right-=1
    return "Palindrome"
s = input()
print(palindrome(s))