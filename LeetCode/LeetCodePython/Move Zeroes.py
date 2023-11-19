class Solution(object):
    def moveZeroes(self, nums):
        p = 0
        
        for element in range(len(nums)):
            if nums[element]:
                nums[p], nums[element] = nums[element], nums[p]
                p += 1
        return nums