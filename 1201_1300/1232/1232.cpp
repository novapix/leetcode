#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size = static_cast<int>(coordinates.size());
        if (size == 2) return true;

        // For Calculating initial differences
        int x0 = coordinates[0][0], y0 = coordinates[0][1];
        int xdiff = coordinates[1][0] - x0;
        int ydiff = coordinates[1][1] - y0;

        // Starting from 3rd Co check if they have same slopes (just cross multiplication to avoid division)
        for (int i = 2;i < size;i++) {
            if (ydiff * (coordinates[i][0] - x0) != xdiff * (coordinates[i][1] - y0))
                return false;
        }
        return true;
    }
};
int main() {
    Solution sol;

    vector<vector<int>> coordinates = { {1, 2}, {2, 3}, {3, 4}, {4, 5} }; // Example coordinates
    if (sol.checkStraightLine(coordinates))
        cout << "coordinates lie on the same straight line." << endl;
    else
        cout << "coordinates do not lie on the same straight line." << endl;

    return 0;
}