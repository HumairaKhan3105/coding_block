#include<iostream>
using namespace std;

int findSecondMax() {
    int max=0;
    int secondMax=0;

    int arr[]={2,4,8,5,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);  //for identify size

    for(int i=0;i<n;i++) {
        if(arr[i]>max) {
            secondMax=max;
            max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max) {
            secondMax=arr[i];
        }
    }

    return secondMax;
}

int main() {
    cout << findSecondMax();
    return 0;
}