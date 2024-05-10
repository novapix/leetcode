from typing import List


class Solution:
    def checkStraightLine(self, coordinates: List[List[int]]) -> bool:
        if len(coordinates) == 2:
            return True
        x0, y0 = coordinates[0][0], coordinates[0][1]
        xdiff = coordinates[1][0] - x0
        ydiff = coordinates[1][1] - y0

        for x, y in coordinates[2:]:
            if ydiff * (x - x0) != xdiff * (y - y0):
                return False

        return True


sol = Solution()
print(sol.checkStraightLine([[1, 2], [2, 3], [3, 4], [4, 5], [5, 6], [6, 7]]))
