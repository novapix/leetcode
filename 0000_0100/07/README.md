# Reverse Integer

## Alternative Solutions

```py
class Solution:
    def reverse(self, x: int) -> int:
        if x == 0:
            return 0
        INT_MAX = 2**31 - 1
        INT_MIN = -2**31
        negative = x < 0
        x = abs(x)
        s = str(x)[::-1]
        s = s.lstrip('0')
        reversed_num = int(s) if not negative else -int(s)
        if reversed_num < INT_MIN or reversed_num > INT_MAX:
            return 0
        return reversed_num
```
