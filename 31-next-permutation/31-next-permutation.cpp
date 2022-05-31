class Solution {
public:
      void swap(vector<int> &nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    
       void reverse(vector<int> &nums, int start) {
        int i = start, j = nums.size() - 1;
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }
    
    
    void nextPermutation(vector<int>& arr) {

    int i = arr.size() - 2;
    
        
    while(i >= 0 && arr[i + 1] <= arr[i]  ){
        i--;
    }
    
           if (i >= 0) {
            int j = arr.size() - 1;
            while (arr[j] <= arr[i]) {
                j--;
            }
            swap(arr, i, j);
        }
        reverse(arr, i + 1);
        
        
    }

   
};