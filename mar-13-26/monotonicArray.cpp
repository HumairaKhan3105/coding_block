/* LEETCODE = 896
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true;
        bool decreasing = true;
        for(int i =0;i < n-1;i++){
            if(nums[i] < nums[i+1]){
                decreasing = false;
            }
            if(nums[i] > nums[i+1]){
                
                increasing =  false;
             }
             

        }
        return increasing || decreasing;
    }
};*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool increasing = true;
        bool decreasing = true;

        for(int i = 0; i < n-1; i++){
            if(nums[i] < nums[i+1]){
                decreasing = false;
            }
            if(nums[i] > nums[i+1]){
                increasing = false;
            }
        }

        return increasing || decreasing;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,2,3};

    if(obj.isMonotonic(nums))
        cout << "Array is Monotonic";
    else
        cout << "Array is Not Monotonic";

    return 0;
}