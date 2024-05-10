from typing import List

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        l = len(nums)
        if l == 1:
            return 1
        j = 1
        for i in range(1, l):
            if nums[i] != nums[i - 1]:
                nums[j] = nums[i]
                j += 1

        return j