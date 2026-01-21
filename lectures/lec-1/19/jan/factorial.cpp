//Q10. Find the Factorial of a Number
#include<iostream>
using namespace std;
int main(){
    int fact = 1 ,n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<"The factorial of is :"<<fact;
    return 0;
}