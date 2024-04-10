class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        negative = x < 0
        x = abs(x)
        rev = 0
        while x > 0:
            digit = x % 10
            rev = rev * 10 + digit
            x //= 10

        if rev < INT_MIN or rev > INT_MAX:
            return 0
        return rev if not negative else -1 * rev
