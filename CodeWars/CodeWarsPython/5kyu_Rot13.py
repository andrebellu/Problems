import string

def rot13(message):
    alphabet="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ"
    out=""
    for char in message:
        if char in alphabet:
            out+=alphabet[alphabet.index(char)+13]
        else:
            out+=char
    return out