class Solution {
public:
    vector<vector<int>> ans;
    void getAllUnique(vector<int> & c, vector<int> &dq, int target, int index) {
     
        if(index >= c.size()) {
            if(target == 0) {
                 ans.push_back(dq);
            }
            
            return;
        }
        
        
        if(c[index] <= target) {
            dq.push_back(c[index]);
            getAllUnique(c, dq, target-c[index], index);
            dq.pop_back();
        }
        
        getAllUnique(c, dq, target, index+ 1);
    }
    
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<int> dq;
        getAllUnique(c, dq, target, 0);
        return ans;
    }
};