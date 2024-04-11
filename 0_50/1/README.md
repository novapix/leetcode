# Two Sums

## Alternative Solns
- python3
    ```py
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
    ```
- Dart
    ```dart
    class Solution {
        List<int> twoSum(List<int> nums, int target) {
            for (int i = 0; i < nums.length; i++) {
                for (int j = i + 1; j < nums.length; j++) {
                    if (i != j && nums[i] + nums[j] == target) return [i, j];
                }
            }
            return [];
        }
    }

    void main() {
        final Solution soln = new Solution();
        print(soln.twoSum([2, 7, 11, 15], 26));
    }
    ```
