class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count_max = 0, count = 0;
        for(int i=0;i<nums.size();i++){

            if(nums[i] == 1) {
                count++;
            }
            else{
                count = 0;
            }
            count_max = max(count, count_max);
        }
        return count_max;
    }
};