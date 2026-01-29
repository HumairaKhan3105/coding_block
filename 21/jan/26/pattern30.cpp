#include<iostream>
using namespace std;
int main(){
    int n = 5;
 
    for(int i = 1 ; i<=n;i++){
        int num=n;
        for(int j=1; j<=n ;j++){
            cout<<num<<" ";
            num--;
        }
        cout<<endl;
    }
}