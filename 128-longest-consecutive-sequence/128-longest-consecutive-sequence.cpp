class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> a;
        
        for(int i=0;i<nums.size();i++){
            a.insert(nums[i]);
        }
        
        
        int longest = 0;
        for(int i=0;i<nums.size();i++) {
            int count = 0;
            if(a.find(nums[i] - 1) == a.end()) {
                int length = 0;
                while(a.find(nums[i] + length) != a.end()) {
                    length++;      
                }
                longest = max(longest, length);   
            }
        }
        return longest;
    }
};