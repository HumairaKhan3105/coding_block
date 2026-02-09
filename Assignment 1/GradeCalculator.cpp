#include<iostream>
using namespace std;

int main() {
    int M;

    cin>>M;

    if(M>=90) {
        cout<<"A"<<endl;
    }
    else if(M>=75 && M<90) {
        cout<<"B"<<endl;
    }
    else if(M>=60 && M<75) {
        cout<<"C"<<endl;
    }
    else {
        cout<<"Fail"<<endl;
    }
    return 0;

}