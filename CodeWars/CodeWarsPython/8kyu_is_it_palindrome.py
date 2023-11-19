#Write a function that checks if a given string (case insensitive) is a palindrome.

def is_palindrome(s):
    s = s.lower()
    if s == s[::-1]:
        return True
    else:
        return False
