import re

def alphabet_position(text):
    r = ""
    text = re.sub("[^a-zA-Z]", "", text)
    
    for element in text.lower():
        if element != " ":
            r += str(ord(element) - 96)
            r += " "
        else:
            r += " "   
    
    return r.strip()