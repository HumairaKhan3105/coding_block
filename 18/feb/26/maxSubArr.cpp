// LEETCODE ----> 53 MAX SUBARRAY

/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum=nums[0];
        int currentSum=0;
    
    for(int i=0;i<nums.size();i++) {
        currentSum+=nums[i];

        maxSum=max(maxSum,currentSum);

        if(currentSum<0) {
            currentSum=0;
        }

    }
    return maxSum;
    }
        
};    */




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = 0;
    
        for(int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            maxSum = max(maxSum, currentSum);

            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    
    int result = obj.maxSubArray(nums);
    cout << "Maximum Subarray Sum: " << result << endl;

    return 0;
}
