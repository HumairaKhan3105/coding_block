// Leetcode ---> 724 pivot index 
/*
  class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total=0;
        for(int i =0;i<nums.size();i++){
                total+=nums[i];
        }
         for(int i =0;i<nums.size();i++){

              total -= nums[i];

            if(left == total){
                return i;
            }
              left+=nums[i];
        }
        return -1;
    }
};  */


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total = 0;

        // Step 1: Calculate total sum
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }

        // Step 2: Find pivot index
        for(int i = 0; i < nums.size(); i++){
            total -= nums[i];   // now total becomes right sum

            if(left == total){
                return i;
            }

            left += nums[i];
        }

        return -1;
    }
};

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int total = 0;

        // Step 1: Calculate total sum
        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
        }

        // Step 2: Find pivot index
        for(int i = 0; i < nums.size(); i++){
            total -= nums[i];   // now total becomes right sum

            if(left == total){
                return i;
            }

            left += nums[i];
        }

        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 7, 3, 6, 5, 6};

    int result = obj.pivotIndex(nums);
    cout << "Pivot Index: " << result << endl;

    return 0;
}
