#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> listEven, listOdd;

        for (const int& number : nums) {
            if (number % 2 == 0) listEven.push_back(number);
            else listOdd.push_back(number);
        }
        for(const int& number : listOdd){
            listEven.push_back(number);
        }


        return listEven;
    }
};