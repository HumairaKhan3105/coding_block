#include<iostream>
using namespace std;

void SelectionSort(int nums[],int n){
	for(int i =0;i<n-1;i++){
		int MinIndex = i;
		for(int j =i+1;j<n;j++){
			if(nums[j] < nums[MinIndex]){
            	MinIndex = j;

			}
		}
		int temp = nums[i];
		nums[i]  = nums[MinIndex];
		nums[MinIndex] = temp;
	}
}

int main() {
   
   int n;
   cin>>n;

   int nums[n];

   for(int i =0;i<n;i++){
	   cin>>nums[i];
   }

     SelectionSort(nums,n);

   for(int i =0;i<n;i++){
	   cout<<nums[i]<<endl;
   }



	return 0;
}