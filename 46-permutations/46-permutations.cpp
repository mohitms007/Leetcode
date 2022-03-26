class Solution {
public:
    vector<vector<int>> ans;
    void generate(vector<int>& nums, vector<int>& dq, int freq[]) {
        if(nums.size() == dq.size()){
            ans.push_back(dq);
            return;
        }
        
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                dq.push_back(nums[i]);
                freq[i] = 1;
                generate(nums, dq, freq);
                dq.pop_back();
                freq[i] = 0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++) {freq[i] =  0;}
        vector<int> dq;
        generate(nums, dq, freq);
        return ans;
    }
};