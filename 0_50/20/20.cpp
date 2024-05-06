#include <iostream>
#include <stack>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs = {
            { '(', ')'},
            { '{', '}' },
            { '[', ']' },
        };
        stack<char> st = {};
        for (char c : s) {
            if (pairs.contains(c))
                st.push(c);
            else {
                if (st.empty() or c != pairs[st.top()])
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};