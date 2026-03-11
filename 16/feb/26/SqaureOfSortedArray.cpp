// LEETCODE SQUARE OF SORTED ARRAY -----> 977
/*class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n = nums.size();
        int left=0;
        int right = n-1;
        int k=n-1;
        vector<int> result(n);
            while(left <= right){
                if(abs (nums[left]) > abs (nums[right])){
                result[k] = nums[left]*nums[left];
                left++;
            }
            else{
                result[k] = nums[right]*nums[right];
                right--;
                 
            }
            k--;
        }
        return result;
    }
};
*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int k = n - 1;
        
        vector<int> result(n);

        while (left <= right) {
            if (abs(nums[left]) > abs(nums[right])) {
                result[k] = nums[left] * nums[left];
                left++;
            } 
            else {
                result[k] = nums[right] * nums[right];
                right--;
            }
            k--;
        }

        return result;
    }
};

int main() {
    Solution obj;
    
    vector<int> nums = {-4, -1, 0, 3, 10};
    
    vector<int> ans = obj.sortedSquares(nums);
    
    cout << "Sorted Squares: ";
    for (int x : ans) {
        cout << x << " ";
    }
    
    return 0;
}
