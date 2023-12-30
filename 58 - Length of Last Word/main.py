class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        s = s.rstrip()
        last = s.rsplit(" ", maxsplit=1)[-1]
        return len(last)


sol = Solution()
print(sol.lengthOfLastWord("   afwf    abfwe0f fer         "))
print(sol.lengthOfLastWord("a"))
