// LEETCODE -----> 278  IS BAD VERSION

/*
 // The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long left = 1;
        long right = n;

        while(left < right){
            long mid = left + (right-left)/2;
            if(isBadVersion(mid)){
                right = mid;
            }
            else{
                left = mid+1;a
            }
        }
        return left;
    }
}; */

#include <iostream>
using namespace std;

int badVersion = 4;   // suppose 4 is first bad version

bool isBadVersion(int version) {
    return version >= badVersion;
}

int firstBadVersion(int n) {
    long left = 1;
    long right = n;

    while (left < right) {
        long mid = left + (right - left) / 2;

        if (isBadVersion(mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    return left;
}

int main() {
    int n;
    cin >> n;

    cout << firstBadVersion(n);
    return 0;
}