class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int right = matrix.size() - 1;
        int left = 0;
        
        while(left < right) {
            for(int i=0;i<right - left;i++) {
                    
//              assign top and bottom variables
                
                int top = left;
                int bottom = right;
                
                // create a new variable for storing the varirable
                int leftTop = matrix[top][left + i];
                
                
                // make the changes
                
                 matrix[top][left + i] = matrix[bottom - i][left];
        
                
                matrix[bottom - i][left] = matrix[bottom][right - i];
                
               
                matrix[bottom][right - i] = matrix[top + i][right];
                matrix[top + i][right] = leftTop;

            }
                left++;
                right--;
        }
    }
};