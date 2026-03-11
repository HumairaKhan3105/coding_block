#include<iostream>
using namespace std;

void inverse(int arr[],int n){
	int inv[10000];

	for(int i =0;i<n;i++){
		inv[arr[i]] = i;
	}
	for(int i =0;i<n;i++){
		cout<<inv[i]<<" ";
	}
}
int main() {
	int n ;
	cin>>n;
    int arr[100000];
	for(int i = 0;i < n ;i++){
		cin>>arr[i];
	}
	inverse(arr,n);
	
	return 0;
}