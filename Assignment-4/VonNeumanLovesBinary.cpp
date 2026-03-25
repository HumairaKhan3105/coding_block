#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int decimal = 0;
		for(int i =0;i<s.length();i++){
			decimal = decimal*2 + (s[i] - '0');
		}
		cout<<decimal<<endl;
;

	}
	return 0;
}