/* LEETCODE = 905
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;
         while(left < right){
            if(nums[left]%2==0){
                left++;
            }
            else if(nums[right]%2==1){
                right--;
            }
            else{
           swap(nums[left],nums [right]);

            }
        }
        return nums;
    }
}; */
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            if(nums[left] % 2 == 0){
                left++;
            }
            else if(nums[right] % 2 == 1){
                right--;
            }
            else{
                swap(nums[left], nums[right]);
            }
        }
        return nums;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3,1,2,4};

    vector<int> result = obj.sortArrayByParity(nums);

    for(int x : result){
        cout << x << " ";
    }

    return 0;
}