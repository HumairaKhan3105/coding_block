#include<iostream>
using namespace std;
void targetSum(int arr[], int n, int x)
{
    sort(arr,arr+n);
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int sum = arr[left] + arr[right];
        if (sum > x)
        {
            right--;
        }
        else if (sum < x)
        {
            left++;
        }
        else
        {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
    }
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	targetSum(arr,n,x);
	return 0;
}