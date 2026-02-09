#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 int arr[n];
 int search =0;
    for(int i =0;i<n;i++){
     cin>>arr[i];
    }
    cout<<"enter the element you want to search : "<<endl;;
    cin>>search;
    
    for(int i =0;i<n;i++){
        if(search == arr[i]){
        }
    }
    cout<<search;
}