/*
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector <int> total ;
           total.insert(total.end(), nums1.begin(), nums1.end());
           total.insert(total.end(),nums2.begin(),nums2.end());
           sort(total.begin(),total.end());
         int n = total.size();
        if(n%2  == 1){
            return total[n/2];
        }
        else{
          
            return (total[n/2] + total[n/2 - 1]) / 2.0;
        }



    }
}; */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> total;

        total.insert(total.end(), nums1.begin(), nums1.end());
        total.insert(total.end(), nums2.begin(), nums2.end());

        sort(total.begin(), total.end());

        int n = total.size();

        if(n % 2 == 1){
            return total[n/2];
        }
        else{
            return (total[n/2] + total[n/2 - 1]) / 2.0;
        }
    }
};

int main() {

    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};

    Solution obj;

    double result = obj.findMedianSortedArrays(nums1, nums2);

    cout << "Median: " << result << endl;

    return 0;
}