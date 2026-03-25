#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int nums[n];

	for(int i =0;i<n;i++){
		cin>>nums[i];
	}
     
	 int m = 0;
	 cin>>m;
	 int index = -1;

	 for(int i =0;i<n;i++){
		 if(m == nums[i]){
			 index = i;
			 break;
		 }
		 
	 }
     cout<<index;

	return 0;
}