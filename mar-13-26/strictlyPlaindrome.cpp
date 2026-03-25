/* LEETCODE = 2396
class Solution {
public:
    bool isStrictlyPalindromic(int n) {
          return false;
    }
};
*/
#include <iostream>
using namespace std;

class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        return false;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number: ";
    cin >> n;

    bool result = sol.isStrictlyPalindromic(n);

    if(result)
        cout << "true";
    else
        cout << "false";

    return 0;
}