#include<iostream>
using namespace std;

int main() {

    int A;
    int B;
    int C;

    cin>>A;
    cin>>B;
    cin>>C;

    if(A>=B && A>=C) {
        cout<<A<<endl;
    }
    else if(B>=A && B>=C) {
        cout<<B<<endl;
    }
    else{
        cout<<C<<endl;
    }
    return 0;
}