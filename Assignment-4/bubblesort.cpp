#include<iostream>
using namespace std;
  void bubble(int nums[],int n){
	  for(int i =0;i<n-1;i++){
		  for(int j = 0;j<n-i-1;j++){
			  if(nums[j]>nums[j+1]){
				  int temp = nums[j];
				  nums[j] = nums[j+1];
				  nums[j+1] = temp;
			  }
		  }
	  }
  }



int main() {
	int n;
	cin>>n;
	int nums[10000];
	for(int i = 0;i<n;i++)
{
	cin>>nums[i];
}	

bubble(nums,n);

for(int i = 0;i<n;i++)
{
	cout<<nums[i]<<endl;
}	



return 0;
}