
#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"enter the size";
cin>>n;

int price[n];
cout<<"enter the price"<<endl;
for(int i =0;i<n;i++){
    cin>>price[i];
}
int q;
cout<<"enter the query"<<endl;
cin>>q;
    cout<<"enter the alex money & claim"<<endl;

for(int i =0;i<q;i++){
    int a,k;
    cin>>a>>k;
    int count = 0;
    for(int j=0;j<n;j++){
        if(a % price[j] == 0){
            count++;
        }
        
    }
    if(count >= k){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}

    return 0;
}