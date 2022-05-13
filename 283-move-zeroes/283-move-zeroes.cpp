class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int lastNonZeroAt = 0; 
       for(int i=0;i<nums.size();i++) {
           if(nums[i] != 0) {
               nums[lastNonZeroAt++] = nums[i];
           }
       } 
       for(int i=lastNonZeroAt;i<nums.size();i++){
           nums[i] = 0;
       }
    }
};