class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        c = 0
        # start from last of string to first(index 0) ,decreasing -1 on each loop
        for i in range(len(s) - 1, -1, -1):
            # Skip Trailing whitespace
            if s[i] == ' ' and c == 0:
                continue
            # stop once separtor space
            if s[i] == ' ':
                return c
            # increase by one if index content is not space
            c += 1
        return c


sol = Solution()
print(sol.lengthOfLastWord("   fly me   to   the moon  "))
