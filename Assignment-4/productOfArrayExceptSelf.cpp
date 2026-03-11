#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long >arr(n);
    for(int i =0;i<n;i++)
    {
     cin>>arr[i];
    }
    vector<long long> num(n,1);

    long long left = 1;

    for (int i = 0;i<n;i++){
        num[i] = left;
       left *= arr[i];
    }

    long long right = 1;
    for(int i=n-1;i>=0;i--)
    {
        num[i] *= right;
        right*=arr[i];
    }

    for(int i =0;i<n;i++){
        cout<<num[i]<<" ";
    }
return 0;
}