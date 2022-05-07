class Solution {
public:
    
    vector<int> showpq(priority_queue<pair<int, int>> &gq, vector<int>& vec, int k)
    {
       int count = 0;
        while (!gq.empty() && count < k) {
        count++;
        pair<int,int> to = gq.top();
        vec.push_back(to.second);
        gq.pop();
     }
        return vec;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        
        for(auto i: freq) {
            pq.push(make_pair(i.second, i.first));
        }
        
        vector<int> ans;
        showpq(pq, ans, k);
        
        return ans;
        
    }
};