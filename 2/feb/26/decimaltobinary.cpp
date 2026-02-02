#include<iostream>
using namespace std;
int main(){
    int binary=0,decimal,place=1;
    cin>>decimal;
    while(decimal>0){
         int rem = decimal%2;
         binary = binary+rem*place;
         place = place*10;
         decimal = decimal/2;
    }
    cout<<binary;
    return 0;
}