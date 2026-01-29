#include <iostream>
using namespace std;

int main()
{
   int n=5;
   for(int i=1;i<=n;i++){
       cout<<" ";
       int num=n;
       for(int j=1;j<=i;j++){
        if(i%2==0){
         cout<<"* ";
        }
        else{
            cout<<num;
        }
       }
       cout<<endl;
   }
   for(int i=2;i<=n;i++){
       cout<<" ";
       for(int j=n;j>=i;j--){
           cout<<"* ";
       }
       cout<<endl;
   }
    return 0;
}