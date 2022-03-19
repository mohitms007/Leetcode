/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathNumber = INT_MIN;
    int maxPath(TreeNode* root) {
          if(root==NULL){
            return 0;
        }
        
        int leftPathSum = max(0,maxPath(root->left));
        int rightPathSum = max(0,maxPath(root->right));
        
        maxPathNumber = max(maxPathNumber, leftPathSum + rightPathSum + root->val);
        return root->val + max(leftPathSum, rightPathSum); 
    }

    int maxPathSum(TreeNode* root) {
      maxPath(root);
      return maxPathNumber; 
        
    }
    
    
};