//Q13. Reverse a Number using a While Loop
#include<iostream>
using namespace std;
int main(){
    int n, reversedNum = 0, digit;
    cout<<"Enter a number: ";
    cin>>n;
    while(n > 0){
        digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n= n/10;
    }
    cout<<"Reversed Number: "<<reversedNum;
    return 0;
}