# The guess API is already defined for you.
# @param num, your guess
# @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
# def guess(num):

class Solution(object):
    def guessNumber(self, n):
        
        l, r = 1, n
        
        while True:
            m = (l+r) // 2
            x = guess(m)
            
            if x > 0:
                l = m+1
            elif x < 0:
                r = m-1
            else:
                return m
        