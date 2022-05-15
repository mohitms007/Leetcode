class Solution {
public:
        bool isAnagram(string s, string t) {
        vector<int> a(26);
        for (int i = 0; i < s.length(); i++) a[s[i] - 'a']++;
        for (int i = 0; i < t.length(); i++) a[t[i] - 'a']--;
        for (int i : a) if (i != 0) return false;
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n = words.size();
        for(int i=1;i<words.size();i++){
            cout << words[i]<<endl;
            if(isAnagram(words[i], words[i-1])){
                vector<string>::iterator it;
                it = words.begin() + i;
                words.erase(it);
                i--;
            }
        }
        
        return words;
    }
};