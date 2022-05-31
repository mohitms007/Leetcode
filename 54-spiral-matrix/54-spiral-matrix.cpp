class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        vector<int> ans;
         
        if (a.size() == 0) {
            return ans;
        }
        
        int upper_row,lower_row,left_col, right_col;
        upper_row = 0;
        lower_row = a.size() - 1;
        left_col = 0;
        right_col = a[0].size() - 1;
        
        // right
        while(upper_row <= lower_row and left_col <= right_col){
        
        for(int i=left_col;i<=right_col;i++){
            ans.push_back(a[upper_row][i]);
        }
        
        upper_row++;
        
             
        for(int i=upper_row;i<=lower_row;i++){
            ans.push_back(a[i][right_col]);
        }
        
        
        right_col--;
        
         if (upper_row <= lower_row){
             for(int i=right_col;i>=left_col;i--){
            ans.push_back(a[lower_row][i]);
        }
        
        lower_row--;
         }    
        
          if (left_col <= right_col){
              for(int i=lower_row; i>= upper_row; i--) {
            ans.push_back(a[i][left_col]);
        }
        
        left_col ++;
        
        }
        
          }
        
        

        return ans;
        
      
    }
};