def solution(s):
    rd = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    i, r = 0, 0
    
    for i in range(len(s)):
        if i + 1 < len(s) and rd[s[i]] < rd[s[i+1]]:
            r -= rd[s[i]]
        else:
            r += rd[s[i]]
            
    return r