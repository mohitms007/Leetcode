class Solution {
public:
    
    int findPaths(int m, int n, int i, int j) {

        vector<vector<int>> ans(m, vector<int> (n));
        for(int i=m-1;i>= 0;i--){
            for(int j=n-1;j >= 0;j--){
                if(i == m - 1 || j == n - 1) {
                    ans[i][j] = 1;
                }else{
                    ans[i][j] = ans[i + 1][j] + ans[i][j+1];
                }
            }
        }
      
        
        return ans[0][0];
    }
    
    int uniquePaths(int m, int n) {
        int i = 0;
        int j = 0;
        return findPaths(m, n, i , j);
    }
};