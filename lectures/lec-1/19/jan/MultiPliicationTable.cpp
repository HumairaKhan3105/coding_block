//Q9. Print the Multiplication Table of 7
#include<iostream>
using namespace std;
int main(){
    int n = 7;
    cout<<"Multiplication table of 7 is:"<<endl;
    for(int i = 1; i <= 10; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}