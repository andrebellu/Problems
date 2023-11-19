class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s, p = 0, 1
        for element in str(n):
            s += int(element)
            p *= int(element)
        return p-s