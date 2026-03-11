// LEETCODE ---> 704 BINARY SEARCH 
/*
 class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size()-1;

        while(left<=right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                left =  mid+1;
            }
            else{
                right = mid -1;
            }
        }
        return -1;
    }
      
}; */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0;
        int right = nums.size()-1;

        while(left <= right){
            int mid = (left + right) / 2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,2,3,4,5,6};
    int target = 4;

    cout << obj.search(nums, target);
}