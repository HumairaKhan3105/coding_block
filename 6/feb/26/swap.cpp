#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max;
 int arr[n];
    for(int i =0;i<n;i++){
     cin>>arr[i];
    }
    int tem = arr[0];
    arr[0] = arr[2];
    arr[2] = tem;
   for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
