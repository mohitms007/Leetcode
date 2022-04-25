class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
         map<string, vector<string>> ans;
        for(int i=0;i<str.size();i++){
            string temp = str[i];
            sort(str[i].begin(), str[i].end());
            ans[str[i]].push_back(temp);
        }
        vector<vector<string>> ans1;
        for(auto i: ans) {
            ans1.push_back(i.second);
        }
    
        return ans1;
        
      
    }
};