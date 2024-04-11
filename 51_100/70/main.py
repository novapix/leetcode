class Solution:
    def climbStairs(self, n):
        if n <= 2:
            return n

        fn = [0] * (n + 1)
        fn[0] = 1
        fn[1] = 2

        for i in range(3, n + 1):
            fn[i] = fn[i - 1] + fn[i - 2]

        return fn[n]


s = Solution()
print(s.climbStairs(45))
