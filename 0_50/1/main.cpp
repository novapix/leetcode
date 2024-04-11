#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hmap;
        for (vector<int>::size_type i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (hmap.contains(diff)) {
                return { hmap[diff], static_cast<int>(i) };
            }
            hmap[nums[i]] = i;
        }
        return {};
    }
};
int main() {
    Solution solution;
    vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    vector<int> result = solution.twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}

// invalid narrowing conversion from "unsigned long" to "int"
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> hmap;
//         for (int i = 0; i < nums.size(); i++) {
//             int diff = target - nums[i];
//             if (hmap.contains(diff)) {
//                 return { hmap[diff], i };
//             }
//             hmap[nums[i]] = i;
//         }
//         return {};
//     }
// };
// to avoid this use explicit type & Static Cast