def is_palindrome(s):
    return s == s[::-1]

def count_words(text):
    return len(text.split())

def celsius_to_fahrenheit(c):
    return (c * 9/5) + 32
