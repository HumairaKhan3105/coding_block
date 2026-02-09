#include<iostream>
using namespace std;
int main() {
    int S1;
    int S2;
    int S3;
    cin>>S1>>S2>>S3;

    if(S1==S2 && S2==S3) {
        cout<<"Equilateral"<<endl;
    }
    else if(S1==S2|| S1==S3 ||S2==S3) {
        cout<<"Isosceles"<<endl;
    }
    else {
        cout<<"Scalene"<<endl;
    }

    return 0;

}