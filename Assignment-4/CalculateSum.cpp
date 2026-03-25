#include<iostream>
using namespace std;
int main() {
	const long long MOD = 1000000007;

	long long n;
	cin>>n;
	long long x,sum =0;
	for(int i =0;i<n;i++){
		cin>>x;
		sum = (sum+x) % MOD;
	}
	long long q;
	cin>>q;
	for(int i =0;i<q;i++){
       cin>>x;
	}
	long long ans = sum;
	for(int i = 0; i < q; i++){
        ans = (ans * 2) % MOD;
    }

    cout << ans;

	return 0;
}