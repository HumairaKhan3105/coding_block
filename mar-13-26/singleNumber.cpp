/* LEETCODE = 136
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i =0;i <  nums.size();i++){
            result = result ^ nums[i];
        }
        return result ;
    }
};*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++){
            result = result ^ nums[i];
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4,1,2,1,2};

    int ans = sol.singleNumber(nums);
    cout << "Single number is: " << ans << endl;

    return 0;
}