# Ugly Number

## alternative
- python
```py
class Solution:
    def isUgly(self, n: int) -> bool:
        if n < 1:
            return False
        elif n == 1:
            return True
        for i in {2,3,5}:
            while n%i == 0:
                n //= i
        return n == 1
```