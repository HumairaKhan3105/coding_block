#include<iostream>
using namespace std;
void second_max(int arr,int n,int max1,int max2){
       for(int i =0;i<= n;i++){
        if(max1>arr[i]){
            continue;
        }
        else if(max2>arr[i]){
            break;
        }
        cout<<max2;
       }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int max1,max2;
  for(int i =0;i<n;i++){
            cin>>arr[i];
       }
       second_max(arr[], n);


}