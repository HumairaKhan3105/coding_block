#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int nums[n];
  
    
    for(int i = 0;i < n;i++){
        cin>>nums[i];
    }

     int result[n];
     int start = 0;
     int end =n-1;
     int index=n-1;
    
   
   while(start<=end){
        int leftsquare = nums[start] * nums[start];
        int rightsquare = nums[end] * nums[end];
        if(leftsquare > rightsquare){
            result[index] = leftsquare;
            start++;
        }
        else{
            result[index] = rightsquare;
            end--;
        }
        index--;
   }
   for(int i = 0; i < n; i++){
       cout << result[i] << " ";
   }
}
