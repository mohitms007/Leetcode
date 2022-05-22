class Solution {
public:
    int subarraySum(vector<int>& arr, int s) {
        int n = arr.size();
	    unordered_map<int,int> ans;
        
        int count = 0;
        int sum = 0;
        ans[sum] = 1;
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(ans[sum - s] != 0) {
                count += ans[sum - s];
            }
            
            ans[sum]++; 
        }
        
//         for(int i=0;i<n;i++){
        
//         }
        
        return count;
    }
};