// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n =arr.size();
        vector<vector<bool>> dp (arr.size() + 1, vector<bool> (sum + 1, false));

            for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // If sum is not 0 and set is empty,
    // then answer is false
    for (int i = 1; i <= sum; i++){
        dp[0][i] = false;
    }
        for(int i=1;i<=arr.size();i++){
            for(int j=1;j<=sum;j++) {
                    if(arr[i - 1] <= j) {
                          dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i-1][j];
                    }else{
                        dp[i][j] = dp[i-1][j];
                    }
                  
                }
            }
    
      return dp[arr.size()][sum];  
    // bool subset[arr.size() + 1][sum + 1];
    // int n = arr.size();
    // // If sum is 0, then answer is true
    // for (int i = 0; i <= n; i++)
    //     subset[i][0] = true;
 
    // // If sum is not 0 and set is empty,
    // // then answer is false
    // for (int i = 1; i <= sum; i++)
    //     subset[0][i] = false;
 
    // // Fill the subset table in bottom up manner
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= sum; j++) {
    //         if (j < arr[i - 1])
    //             subset[i][j] = subset[i - 1][j];
    //         if (j >= arr[i - 1])
    //             subset[i][j] = subset[i - 1][j]
    //                           || subset[i - 1][j - arr[i - 1]];
    //     }
    // }

 
    // return subset[n][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends