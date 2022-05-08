class Solution {
public:
    string largestGoodInteger(string nums) {
        int fals = 0;
        string s1 = "";
        int max = INT_MIN;
        for(int i=0;i<=nums.size()-2;i++){
           if(nums[i] == nums[i+1] && nums[i + 1] == nums[i+2]){
             
               if(int(nums[i]) - 48 > max) {
                   s1 = "";
                   max = int(nums[i]) - 48;
                   s1 += nums[i];
                   s1 += nums[i];
                   s1 += nums[i];
               }
               
               
           }
        }
        
        
        return s1;
    }
};