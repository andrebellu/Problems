import math

def is_square(n):

    if n < 0:
        return False

    x = int(math.sqrt(n))
    if x*x == n:
        return True
    else:
        return False