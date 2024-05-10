class Solution {
  int romanToInt(String s) {
    Map<String, int> roman = {
      'I': 1,
      'V': 5,
      'X': 10,
      'L': 50,
      'C': 100,
      'D': 500,
      'M': 1000,
    };
    int total = 0;
    for (int i = 0; i < s.length - 1; i++) {
      if (roman[s[i]]! < roman[s[i + 1]]!)
        total -= roman[s[i]]!;
      else
        total += roman[s[i]]!;
    }
    return total + roman[s[s.length - 1]]!;
  }
}

void main() {
  Solution soln = Solution();
  print(soln.romanToInt("III"));
}
