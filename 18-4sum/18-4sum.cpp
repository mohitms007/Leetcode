class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {

        vector<vector<int>> ans2;
        if(a.size() == 0) return ans2;
        sort(a.begin(), a.end());
        int n = a.size();
       
        for(int i=0;i<n;i++){
                       double target_3 = target - a[i];
            for(int j = i+1; j<n;j++) {
                int k = j + 1;
                int end = n - 1;
                // int tar = target - a[i] - a[j];
       double tar = target_3 - a[j];
                while(k < end) {
                    if(a[k] + a[end] == tar) {
                      vector<int> quad(4);
                       quad[0] = a[i];
                        quad[1] = a[j];
                        quad[2] = a[k];
                        quad[3] = a[end];
                        ans2.push_back(quad);
                        
                        // Processing the duplicates of number 3
                        while (k < end && a[k] == quad[2]) ++k;
                    
                        // Processing the duplicates of number 4
                        while (k < end && a[end] == quad[3]) --end;
                    }else if(a[k] + a[end] > tar) {
                        end--;
                    }else{
                        k ++;
                    }
                }
                
                while(j + 1 < n && a[j + 1] == a[j]) ++j;
            }
            
            while(i + 1 < n && a[i + 1] == a[i]) ++i;
        }
        

        
        return ans2;
    }
};