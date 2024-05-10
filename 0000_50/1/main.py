from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hmap = {}
        for k, v in enumerate(nums):
            diff = target - v
            if diff in hmap:
                return [hmap[diff], k]
            hmap[v] = k
        return []


soln = Solution()
print(soln.twoSum([2, 3, 6, 8], 11))
