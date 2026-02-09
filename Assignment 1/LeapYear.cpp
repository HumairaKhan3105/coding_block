#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    if ((N%400==0)||(N%4==0 && N%100!=0)) {

    cout<<"Leap Year"<<endl;
 }
    else {
    cout<<"Not a Leap Year"<<endl;
 }
return 0;
}