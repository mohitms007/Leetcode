class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> nums;
        // nums[0][0] = 1;
        for(int i=0;i<numRows;i++){
            vector<int> small(i+1,1);
            for(int j=1;j<i;j++) {
                
                
                small[j] = nums[i - 1][j] + nums[i - 1][j - 1];
                
            }
            nums.push_back(small);
        }
   return nums;
    }};
    
