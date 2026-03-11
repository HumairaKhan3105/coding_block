// LEETCODE ----> 134 GAS STATION
/*
  class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0;
        int total = 0 ;
        int start=0;
        for(int i =0;i < gas.size();i++){
            int diff = gas[i] - cost[i];
            total+=diff;
            tank+=diff;
        
        if(tank<0){
            start= i+1;
           tank = 0;
         } 
        }
        if(total<0)
           return -1;
       return start;    
    }
};   */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0;
        int total = 0;
        int start = 0;

        for(int i = 0; i < gas.size(); i++){
            int diff = gas[i] - cost[i];
            total += diff;
            tank += diff;

            if(tank < 0){
                start = i + 1;
                tank = 0;
            }
        }

        if(total < 0)
            return -1;

        return start;
    }
};

int main() {
    Solution obj;

    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    cout << obj.canCompleteCircuit(gas, cost);

    return 0;
}
