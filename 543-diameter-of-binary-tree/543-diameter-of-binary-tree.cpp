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
    int maxHeight = 0;
     int findHeight(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }
        
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        
        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        
        maxHeight = max(maxHeight, leftHeight + rightHeight);
        
        int checkLeft = diameterOfBinaryTree(root->left);
        int checkRight = diameterOfBinaryTree(root->right);
        
        return maxHeight;
        
        
    }
};