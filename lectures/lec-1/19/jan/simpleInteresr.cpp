//Q2. Simple Interest Calculation

#include<iostream>
using namespace std;
int main(){
    int SI, principal, rate, time;
    cout<<"Enter the principal amount: ";
    cin>>principal;
    cout<<"Enter the rate of interest: ";
    cin>>rate;
    cout<<"Enter the time in years: ";
    cin>>time;
    SI = (principal * rate * time) / 100;
    cout<<"The Simple Interest is: "<<SI;
    return 0;   
}