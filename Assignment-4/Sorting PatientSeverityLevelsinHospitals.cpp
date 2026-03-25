#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<long long>arr(n);
	int count0 = 0,count1 = 0, count2 = 0;
	for(int i =0;i<n;i++){
		cin>>arr[i];
		if(arr[i] == 0) count0++;
		else if(arr[i] == 1) count1++;
		else count2++;
	}
	for(int i =0;i<count0;i++){
		cout<<0<<endl;
	}
	for(int i =0;i<count1;i++){
		cout<<1<<endl;
	}
	for(int i =0;i<count2;i++){
		cout<<2<<endl;
	}
	return 0;
}