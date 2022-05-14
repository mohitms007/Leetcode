// class Solution {
// public:
//     int divisorSubstrings(int num, int k) {
//         string x = to_string(num);
//         int n = x.length();
//         int ans = 0;
//         for(int i = 0;i<=(n-k);i++){
//             if(stoi(x.substr(i,k)) != 0)
//             if(num % stoi(x.substr(i,k)) == 0 )
//                 ans++;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count = 0;

        for(int i=0;i<=s.length() - k;i++){
            
            if(i + k - 1 < s.length()){
                string sub = s.substr(i,k);
               
                
                if(stoi(sub)!= 0 && num % stoi(sub) == 0) {
                     count ++;
                 }
            }
           
            
        }
        return count;
    }
};