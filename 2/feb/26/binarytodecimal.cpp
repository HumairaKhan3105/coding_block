#include<iostream>
using namespace std;
int main(){
    int binary,decimal=0,base=1;
    cin>>binary;
    while(binary>0){
        int x = binary%10;
        decimal = decimal+x*base;
        base = base*2;
        binary = binary/10;
    }
    cout<<decimal<<endl;
    return 0;
}