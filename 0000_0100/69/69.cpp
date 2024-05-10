class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) return x;

        long long left = 0;
        long long right = x;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == x or (square < x and (mid + 1) * (mid + 1) > x))
                return mid;

            else if (square < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return right; // return mid;
    }
};
