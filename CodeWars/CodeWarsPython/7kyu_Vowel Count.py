import re
def get_count(sentence):
    return len(re.sub(r"[^aeiou]", "", sentence))