class Solution {
  int removeDuplicates(List<int> nums) {
    if (nums.length == 1) {
      return 1;
    }
    int j = 1;
    for (int i = 1; i < nums.length; i++) {
      if (nums[i] != nums[i - 1]) {
        nums[j] = nums[i];
        j++;
      }
    }
    return j;
  }
}

void main() {
  Solution s = Solution();
  List<int> nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4];
  print(s.removeDuplicates(nums));
}
