#include <iostream>
#include<unordered_map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int total = 0;
        int len = static_cast<int>(s.length());
        for (int i = 0; i < len - 1;i++) {
            if (roman[s[i]] < roman[s[i + 1]])
                total -= roman[s[i]];
            else
                total += roman[s[i]];
        }
        return total + roman[s[len - 1]];
    }
};

int main() {
    Solution sol;
    string romanNumeral = "MCMXCIV";


    int result = sol.romanToInt(romanNumeral);
    cout << "The integer value of " << romanNumeral << " is " << result << endl;

    return 0;
}