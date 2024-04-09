class Solution {
  int lengthOfLastWord(String s) {
    List<String> words = s.trim().split(' ');
    return words.last.length;
  }
}
