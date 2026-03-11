#include<iostream>
using namespace std;
void revarr(int arr[],int n)
{
	int left = 0;
	int right = n-1;
	while(left < right)
	{
		swap(arr[left],arr[right]);
		left++;
		right--;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	revarr( arr, n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;
}