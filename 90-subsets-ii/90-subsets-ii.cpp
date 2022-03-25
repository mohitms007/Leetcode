class Solution {
public:
    vector<vector<int>> ans;
    void subset(vector<int>& nums, vector<int> &dq ,int index){

       
        ans.push_back(dq);
        for(int i=index;i < nums.size();i++){
            if(i != index && nums[i] == nums[i - 1]) continue;
            dq.push_back(nums[i]);
            subset(nums, dq, i + 1);
            dq.pop_back();
           
        }
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> dq;
        int index = 0;
        sort(nums.begin(), nums.end());
        subset(nums,dq,index);
        return ans;
    }
};