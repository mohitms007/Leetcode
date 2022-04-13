class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        stack<int> st;
        vector<int> gte(nums.size());
        st.push(nums.size() - 1);
        gte[nums.size() - 1] = nums.size();
        
        for(int i=nums.size() - 2; i >= 0; i--){
            
            while(!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if(st.empty()){
                gte[i] = nums.size();
            }else{
                 gte[i] = st.top();
            }
           st.push(i);
        }
        int j = 0;
        vector<int> ans;
        for(int i=0;i<=nums.size() - k;i++) {
            if(j < i) {
                j= i;
            }
            
            while(gte[j] < i + k){
                j = gte[j];
            }
            ans.push_back(nums[j]);
        }
        return ans;
    }
};