#include<iostream>
using namespace std;

void insertion(int nums[],int n){
    for(int i =1;i<n;i++){
		int key = nums[i];
		int j = i-1;
		while(j>=0 && nums[j] > key){
			nums[j + 1] = nums[j];
            j--;
		}
          nums[j + 1] = key;
	}
}




int main() {

	int n;
   cin>>n;

   int nums[n];

   for(int i =0;i<n;i++){
	   cin>>nums[i];
   }

     insertion(nums,n);

   for(int i =0;i<n;i++){
	   cout<<nums[i]<<" ";
   }


	return 0;
}