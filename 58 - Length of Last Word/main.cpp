#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c = 0;
        // Start from the last character of the string and move towards the first (index 0)
        for (int i = s.length() - 1; i >= 0; --i) {
            // Skip Trailing whitespace
            if (s[i] == ' ' && c == 0) {
                continue;
            }
            // stop once separtor space
            if (s[i] == ' ') {
                return c;
            }
            // increase by one if index content is not space
            c += 1;
        }
        return c;
    }
};


int main() {
    Solution s;
    cout << s.lengthOfLastWord("   fly me   to   the moon  ") << endl;
    return 0;
}