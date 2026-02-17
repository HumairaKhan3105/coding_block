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



```class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid+ + 1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }

        while (left <= mid)
            temp.push_back(nums[left++]);

        while (right <= high)
            temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++)
            nums[i] = temp[i - low];
    }

    void mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return;

        int mid = (low + high) / 2;
        mergeSort(nums, low, mid);
        mergeSort(nums, mid + 1, high);
        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
```



*/






#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, vector<int>& temp, int low, int mid, int high) {
    int left = low;
    int right = mid + 1;
    int k = low;

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right])
            temp[k++] = nums[left++];
        else
            temp[k++] = nums[right++];
    }

    while (left <= mid)
        temp[k++] = nums[left++];

    while (right <= high)
        temp[k++] = nums[right++];

    for (int i = low; i <= high; i++)
        nums[i] = temp[i];
}

void mergeSort(vector<int>& nums, vector<int>& temp, int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2;

    mergeSort(nums, temp, low, mid);
    mergeSort(nums, temp, mid + 1, high);
    merge(nums, temp, low, mid, high);
}

int main() {
    vector<int> nums = {5, 2, 3, 1, 4};

    vector<int> temp(nums.size());
    mergeSort(nums, temp, 0, nums.size() - 1);

    cout << "Sorted Array: ";
    for (int x : nums)
        cout << x << " ";

    return 0;
}
