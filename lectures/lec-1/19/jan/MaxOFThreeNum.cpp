//Q5. Find the Maximum of Three Numbers

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the first no:";
    cin>>a;
    cout<<"ENter the secomd no:";
    cin>>b;
    cout<<"Enter the third no:";
    cin>>c;
    if(a>=b && a>=c){
        cout<<"The maximum no is :"<<a; 
    }
    else if(b>=a && b>=c){
        cout<<"The maximum no is :"<<b;
    }
    else{
        cout<<"The maximum no is :"<<c;
    }   
}