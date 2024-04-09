class Solution {
  bool isPalindrome(int x) {
    int temp = x;
    int rev = 0;
    while (temp > 0) {
      final digit = temp % 10;
      rev = rev * 10 + digit;
      temp = temp ~/ 10;
    }
    return x == rev;
  }
}
