#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;

    if(N<=100) {
        cout<<N*2<<endl;
    }

    else if(N>100 && N<=200 ) {
        cout<<N*3<<endl;
 }

 else {
     cout<<N*5<<endl;
 }

 return 0;
}