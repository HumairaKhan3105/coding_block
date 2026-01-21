// Ques 1:
// n = 5
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include<iostream>
using namespace std;
int main(){
    int n = 5;
    for(int i = 1 ; i<5;i++){
        for(int j = 0; j<5 ;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}