import re
def maskify(cc):
    slice = cc[-4:]
    return re.sub(r".", "#", cc[:-4]) + slice if len(cc) > 4 else cc