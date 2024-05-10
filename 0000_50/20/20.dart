class Solution {
  bool isValid(String s) {
    Map<String, String> pairs = {'(': ')', '{': '}', '[': ']'};
    List<String> stack = [];
    for (int i = 0; i < s.length; i++) {
      if (pairs.containsKey(s[i]))
        stack.add(s[i]);
      else {
        if (stack.isEmpty || s[i] != pairs[stack.last]) return false;
        stack.removeLast();
      }
    }
    return stack.isEmpty;
  }
}

void main() {
  Solution S = Solution();
  String test = "(";
  print(S.isValid(test));
}
