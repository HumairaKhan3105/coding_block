#include<iostream>
#include<vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i =0;i<t;i++){
	
	int n;
	cin>>n;
	vector<int> height(n);
	int left = 0;
	int right = n-1;
	int leftMax = 0,rightMax =0;
    long long water =0;
	for(int i =0;i<n;i++){
		cin>>height[i];
	}
	while(left < right){
		if(height[left] < height[right]){
			if(height[left] >= leftMax){
				leftMax = height[left];
			}
			else{
				water += leftMax- height[left];
			}
							left++;
		}
			else{
				if(height[right] >= rightMax){
					rightMax = height[right];
				}
				else{
					water += rightMax - height[right];
				}
				right--;

			}
	}
	   cout<<water<<endl;
	}

}