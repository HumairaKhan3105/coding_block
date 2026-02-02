#include<iostream>
using namespace std;
int main(){
    int a,b,rem;
    cout<<"ENter the value of a & b : "<<endl;
    cin>>a>>b;
    while(b!=0){
        rem = a%b;
        a=b;
        b=rem;
    }
    cout<<"GCD -> "<<a<<endl;
}