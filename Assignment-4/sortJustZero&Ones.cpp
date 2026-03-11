#include<iostream>
using namespace std;

void segregate(int arr[], int n){
    int left = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            swap(arr[i], arr[left]);
            left++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int arr[10000];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    segregate(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i != n-1)
            cout << " ";
    }

    return 0;
}
