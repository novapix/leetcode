class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        long a = 1, b = 2;
        long temp;
        for (int i = 3;i <= n;i++) {
            temp = b;
            b = a + b;
            a = temp;
        }
        return b;
    }
};