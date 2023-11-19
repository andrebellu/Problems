def accum(s):
    mumble = []
    
    for n, ch in enumerate(s):
        mumble.append(ch.upper() + (ch.lower()*(n)))
    return '-'.join(mumble)