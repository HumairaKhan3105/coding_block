#include<iostream>
using namespace std;
int main() {
	int n;
	cin>> n;
	int nums[n];
	
	for(int i =0;i<n;i++){
		cin >> nums[i];
	}
		int max = nums[0];

	for(int i =0;i<n;i++){
		if(max<nums[i]){
		 max = nums[i];
		}
	}
	 
		 cout<<max<<endl;
	 
	
	return 0;
}