# 69 - Sqrt(x)

## Python

- `Time Complexity of` √n

    ```py
    class Solution:
        def mySqrt(self, x: int) -> int:
            # Square Root of 0 and 1 are themselves
            if x == 0 or x == 1:
                return x

            # Start at 1
            i = 1
            result = 0
            # Loop until we get result greater than x
            # first increase i and find result
            while (result <= x):
                i += 1
                result = i * i

            return i - 1
    ```