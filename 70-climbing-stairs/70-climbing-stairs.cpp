class Solution {
public:
    
    int climbStairs(int n) {
        vector<int> dp(n + 1);
       int ans = climbStairsMemo(n, dp);
        return ans;
    }
    
    int climbStairsMemo(int n, vector<int> &dp) {
         
        
        if(n == 0) {
            return 1;
        }else if(n < 0) {
            return 0;
        }
        
          if(n==1) return 1;
        if(n==2) return 2;
        if(n==3) return 3;
        
        if(dp[n] > 0) {
            return dp[n];
        }
        int n1 = climbStairsMemo(n - 1, dp);
        int n2 = climbStairsMemo(n - 2, dp);
        dp[n] = n1 + n2;
        return n1 + n2;
    }
};