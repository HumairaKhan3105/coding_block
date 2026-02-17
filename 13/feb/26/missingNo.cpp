//leetcode -> 268 Missing no

/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int expected = nums.size();
        int total_sum = expected*(expected+1)/2;
        int sum=0;
        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
        }
        return total_sum - sum;
    }
};


*/


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int total_sum = n * (n + 1) / 2;

        int sum = 0;
        for(int num : nums){
            sum += num;
        }

        return total_sum - sum;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {3, 0, 1};

    cout << "Missing Number: " << obj.missingNumber(nums);

    return 0;
}
