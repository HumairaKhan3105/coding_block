//Q12. Find the Sum of Digits of a Given Number using a Loop
#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter a number";
    cin>>n;
    for(int i=n;i>0;i/=10){
        int digit = i % 10;
        sum += digit;
    }
    cout<<"Sum of digits is: "<<sum;
}