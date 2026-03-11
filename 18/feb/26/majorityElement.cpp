// LEETCODE -----> 169 MAJORITY ELEMENT

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) { 

        

        for(int i=0;i<nums.size();i++) {
             int count =0;
            for(int j=0;j<nums.size();j++) {
              
                if(nums[i]==nums[j]) {
                    count++;
                }

            }
         if(count > nums.size()/2) {
                return nums[i];

            
        }
}
    return -1;
    }
};   */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) { 
        for(int i = 0; i < nums.size(); i++) {
            int count = 0;

            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    count++;
                }
            }

            if(count > nums.size() / 2) {
                return nums[i];
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "Majority Element: " << obj.majorityElement(nums);
    return 0;
}
