#include <iostream>
#include <vector>
#include <climits>
using namespace std;

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

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 3, 1};

    cout << "Third Maximum: " << obj.thirdMax(nums);

    return 0;
}
