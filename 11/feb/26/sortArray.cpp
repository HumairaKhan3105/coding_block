/* 
-------------insertion sort------------




class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int key,j;
       for(int i =1;i<nums.size();i++){
        key = nums[i];
        j = i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
       
     }
     return nums;
    }

};



-----------bubble sort----------------------


class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int temp;
        for(int i =0;i<nums.size()-1;i++){
            for(int j =0;j<nums.size()-i-1;j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }

        }
       return nums;
     }

};


---------------------merge sort-------------------------






*/