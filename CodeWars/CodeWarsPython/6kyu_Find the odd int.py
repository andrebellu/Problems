def find_it(seq):
    
    if len(seq) <= 0:
        return None
    
    for num in seq:
        if seq.count(num) % 2 == 1:
            return num