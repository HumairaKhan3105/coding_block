/* LEETCODE = 54 

 class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int top = 0;
        int bottom = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        while(top <= bottom && left<=right){
            //left -> right
            for(int i =left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            //top -> bottom
          for(int i = top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
          }
          right--;
          //right -> left
          if(top <= bottom){
          for(int i = right;i>=left;i--)
            ans.push_back(matrix[bottom][i]);
          
          bottom--;
          }
          //bottom -> top
          if(left <= right){
            for(int i = bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
                left++;

          }
        }
        return ans;
}
};*/

#include <iostream>
#include <vector>
using namespace std;


vector <int> spiralOrder(vector<vector<int>>&matrix){
    vector <int>ans;
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    
    int tne = n*m;
    int count = 0 ;
    
    while(count < tne){
        
        for(int j=left ; j<=right ; j++){
            ans.push_back(matrix[top][j]);
            count++;
        }
        top++;
        if(count>=tne) break;
        
        for(int i=top ; i<=bottom ; i++){
            ans.push_back(matrix[i][right]);
            count++;
        }
        right--;
        if(count>=tne) break;
        
        for(int j=right ; j>=left ; j--){
            ans.push_back(matrix[bottom][j]);
            count++;
        }
        bottom--;
        if(count>=tne) break;
        
        for(int i=bottom ; i>=top ; i--){
            ans.push_back(matrix[i][left]);
            count++;
        }
        left++;
        if(count>=tne) break;
    }
    return ans;
}

int main(){
    vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    vector<int> result = spiralOrder(matrix);
    
    for(int x : result){
        cout<<x<<" ";
    }
    
    return 0;
    
}