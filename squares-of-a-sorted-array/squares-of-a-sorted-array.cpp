class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int left=0;
       int right = nums.size() - 1;
        
    
       vector<int>ans(nums.size());
        
        int index = nums.size() - 1;
        while(left <= right) {
   
            if(abs(nums[left]) > abs(nums[right])) {
                ans[index] = abs(nums[left]) * abs(nums[left]);
                
                left++;
            }else{
                ans[index] = abs(nums[right]) * abs(nums[right]);
            
                right--;
            }
            index --;
        }
        
        return ans;
    }
};