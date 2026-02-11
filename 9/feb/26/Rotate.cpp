//Rotate array -> 189
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void ArrayReverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        ArrayReverse(nums, 0, n - 1);
        ArrayReverse(nums, 0, k - 1);
        ArrayReverse(nums, k, n - 1);
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    obj.rotate(nums, k);

    cout << "Rotated Array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    return 0;
}
