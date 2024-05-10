#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int len = nums.size();
        vector<int> arr(len);

        int evenCounter = 0, oddCounter = len - 1;
        for (int i = 0;i < len;i++) {
            if (nums[i] % 2 == 0) {
                arr[evenCounter++] = nums[i];
            } else {
                arr[oddCounter--] = nums[i];
            }
        }
        return arr;
    }
};