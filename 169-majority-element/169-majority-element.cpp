class Solution {
public:
    int majorityElement(vector<int>& nums) {
        stack<int> S;
        for(int i = 0; i < nums.size(); i++){
            if(S.empty() || nums[i] == S.top()) S.push(nums[i]);
            else if(nums[i] != S.top()) S.pop();
        }
        return S.top();
    }
};