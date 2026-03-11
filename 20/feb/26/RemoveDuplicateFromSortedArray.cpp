// leetcode ---> 26  Remove duplicate from the sorted array

/*
 class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)  return 0;
        int i =0;
        for(int j = 1;j<nums.size();j++){
            if(nums[j] != nums[i]){
            i++;
            nums[i] = nums[j];
            }
        }
        return i+1;
    }
};*/


#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0)
        return 0;

    int i = 0;

    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main() {
    int n;
    cin >> n;   // size of array

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);

    cout << "New Length: " << newLength << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}