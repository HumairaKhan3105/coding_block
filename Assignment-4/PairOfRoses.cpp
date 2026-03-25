
#include <iostream>
#include<algorithm>
#include <climits>
using namespace std;

int main()
{
int n;
cin>>n;

int price[n];

for(int i =0;i<n;i++){
    cin>>price[i];
}
int money;
cin>>money;

int left = 0;
int right = n-1;
int ans1 = 0 ,  ans2 = 0;
int minDiff = INT_MAX;
sort(price,price+n);
while(left < right){
    int sum = price[left] + price[right];
    if(sum > money){
        right --;
    }
    else if(sum < money){
        left++;
    }
    else{
        int diff = price[left] - price[right];
    
       if(diff<minDiff){
           minDiff = diff;
           ans1 = price[left];
           ans2 = price [right];
       }
        left++;
        right--;
    }
    
    
}
  cout << "Deepak should buy roses whose prices are "
         << ans1 << " and " << ans2 << ".";
    return 0;
}