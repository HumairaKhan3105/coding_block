#include<iostream>
using namespace std;
int main() {
	int N;
	int digit;
	int count =0;
	cin>>N;
	cin>>digit;
    while(N>0){
		int x = N%10;
		if(digit == x){
			count++;
		}
		N = N/10;
}
	cout<<count;
	return 0;
}