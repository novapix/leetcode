# Search Insert Position

## Alternative
### C
- Using Linear Search
```C
int searchInsert(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        if (target <= nums[i]) {
            return i;
        }
    }
    return numsSize;
}
```

### python
- using linear search
```py
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        for i in range(len(nums)):
            if target <= nums[i]:
                return i

        return len(nums)
```