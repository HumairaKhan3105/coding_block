// Leetcode 217 ---> comtain duplicate

/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(int i =0;i<nums.size();i++){
            if(s.find(nums[i])!=s.end()){
                return true;
            }
            s.insert(nums[i]);
            }

        
        return false;
    }
};
*/

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3, 4, 1};

    if(obj.containsDuplicate(nums))
        cout << "Duplicate Found";
    else
        cout << "No Duplicate";

    return 0;
}
