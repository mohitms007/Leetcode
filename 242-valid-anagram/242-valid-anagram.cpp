class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        map<char, int> ans;
        map<char, int> ans1;
        for(int i=0;i<s.size();i++) {
            ans[s[i]] ++;
        }
        
        for(int i=0;i<t.size();i++) {
            ans1[t[i]]++;
        }
        
        for(int i=0;i<s.size();i++) {
            if(ans[s[i]] != ans1[s[i]]){
                return false;
            }
        }
        
        
        return true;
        
    }
};