class Solution {
  List<int> twoSum(List<int> nums, int target) {
    Map<int, int> hmap = {};

    for (int i = 0; i < nums.length; i++) {
      int diff = target - nums[i];
      if (hmap.containsKey(diff)) {
        return [hmap[diff]!, i]; // ensuring non-null values
      }
      hmap[nums[i]] = i;
    }
    return [];
  }
}
