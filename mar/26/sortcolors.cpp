/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int curr = 0;
        int right = nums.size()-1;
       
        while(curr<=right){
            if(nums[curr]==0){
                swap(nums[curr],nums[left]);
                    left++;
                    curr++;
            }
                
                else if(nums[curr] == 1)
                    curr++;
                
                else{
                    swap(nums[curr],nums[right]);
                        right--;
                }
        }  
    }
    };
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0;
        int curr = 0;
        int right = nums.size() - 1;

        while (curr <= right) {

            if (nums[curr] == 0) {
                swap(nums[curr], nums[left]);
                left++;
                curr++;
            }

            else if (nums[curr] == 1) {
                curr++;
            }

            else {
                swap(nums[curr], nums[right]);
                right--;
            }
        }
    }
};

int main() {

    vector<int> nums = {2,0,2,1,1,0};

    Solution obj;
    obj.sortColors(nums);

    cout << "Sorted array: ";

    for(int i : nums){
        cout << i << " ";
    }

    return 0;
}