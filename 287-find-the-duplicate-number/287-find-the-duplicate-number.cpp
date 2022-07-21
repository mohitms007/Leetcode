class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        
        while(true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(fast == slow) {
                break;
            }
        }
        
        int slow2 = 0;
        while(true) {
            slow = nums[slow];
            slow2 = nums[slow2];
            if(slow2 == slow) {
                return slow;
            }
        }
        return -1;
    }
    
};