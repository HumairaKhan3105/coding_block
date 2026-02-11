/*
 
-----------leetcode--------------



class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LLONG_MIN;
        long second = LLONG_MIN;
        long third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third)
                continue;

            if (x > first) {
                third = second;
                second = first;
                first = x;
            } 
            else if (x > second) {
                third = second;
                second = x;
            } 
            else if (x > third) {
                third = x;
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};
    




*/


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int thirdMax(vector<int>& nums) {
    long first = LLONG_MIN;
    long second = LLONG_MIN;
    long third = LLONG_MIN;

    for (int x : nums) {
        if (x == first || x == second || x == third)
            continue;

        if (x > first) {
            third = second;
            second = first;
            first = x;
        } 
        else if (x > second) {
            third = second;
            second = x;
        } 
        else if (x > third) {
            third = x;
        }
    }

    return (third == LLONG_MIN) ? first : third;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = thirdMax(nums);
    cout << "Third Maximum Element: " << result << endl;

    return 0;
}
