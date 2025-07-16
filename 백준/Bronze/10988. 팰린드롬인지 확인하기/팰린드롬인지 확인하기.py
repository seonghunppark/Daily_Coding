def is_palindrome(s):
   
    return s == s[::-1]

while True:
    try:
        word = input().strip()
        
        
        if is_palindrome(word):
            print(1)
        else:
            print(0)
            
    except EOFError:
        
        break