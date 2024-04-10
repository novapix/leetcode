class Solution:
    def mySqrt(self, x: int) -> int:
        # Square Root of 0 and 1 are themselves
        if x == 0 or x == 1:
            return x

        left, right = 0, x

        while left <= right:
            mid = left + (right - left) // 2
            square = mid * mid

            if square == x or (square < x and (mid + 1) * (mid + 1) > x):
                return mid
            elif square < x:
                left = mid + 1
            else:
                right = mid - 1

        return 1
