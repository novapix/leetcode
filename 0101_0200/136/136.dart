class Solution {
  int singleNumber(List<int> nums) {
    int ans = 0;
    for (final n in nums) ans ^= n;
    return ans;
  }
}
