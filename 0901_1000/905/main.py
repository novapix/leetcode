from typing import List


class Solution:
    def sortArrayByParity(self, nums: List[int]) -> List[int]:
        list_even: List[int] = []
        list_odd: List[int] = []

        for number in nums:
            if number % 2 == 0:
                list_even.append(number)
            else:
                list_odd.append(number)

        return list_even + list_odd
