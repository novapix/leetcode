class Solution {
  int lengthOfLastWord(String s) {
    int c = 0;
    for (int i = s.length - 1; i >= 0; i--) {
      if (s[i] == ' ' && c == 0) continue;
      if (s[i] == ' ') return c;
      c++;
    }
    return c;
  }
}
