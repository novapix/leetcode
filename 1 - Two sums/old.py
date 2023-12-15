from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for x in range(len(nums)):
            for y in range(x + 1, len(nums)):
                if (x != y and nums[x] + nums[y] == target):
                    return [x, y]
        return []


soln = Solution()
print(soln.twoSum([2, 3, 6, 8], 11))
