class Solution {
public:
    vector<vector<int>> ans;

    
    void checkCombination(vector<int>& arr, int target, int ind, vector<int>& dq) {

        if(target == 0){
            ans.push_back(dq);
            return;
         }
           
        for(int j = ind; j < arr.size() ;j++){
            if(j > ind && arr[j] == arr[j - 1]) continue;
            if(arr[j] > target) break;
            dq.push_back(arr[j]);
            checkCombination(arr, target - arr[j], j + 1, dq);
            dq.pop_back(); 
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        int index = 0;
        sort(arr.begin(), arr.end());
        vector<int>dq;
        checkCombination(arr, target, index, dq);
        return ans;
    }
};