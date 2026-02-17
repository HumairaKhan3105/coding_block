// Leetcode ---> 1480 Running sum of 1d array
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4};

    vector<int> result = obj.runningSum(nums);

    cout << "Running Sum: ";
    for(int num : result){
        cout << num << " ";
    }

    return 0;
}
