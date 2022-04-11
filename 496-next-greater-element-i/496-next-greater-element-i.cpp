class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> ans;
        map<int,int> loc;
        
        for(int i=0;i<nums2.size();i++){
            loc[nums2[i]] = i;
        }
        
        vector<int> gte(nums2.size());
         for(int i=nums2.size() - 1;i >= 0;i--) {
                while(!ans.empty() && ans.top() < nums2[i]) {
                    ans.pop();
                }
             if(!ans.empty()){
                 gte[i] = ans.top();
             }else{
                 gte[i] = -1;
             }
             
             ans.push(nums2[i]);
        }
        
        vector<int> gte2(nums1.size());
        for(int i=0;i<gte2.size();i++){
            // cout << loc[nums1[i]] << " asdg";
            gte2[i] = gte[loc[nums1[i]]];
        }
        return gte2;
    }
};