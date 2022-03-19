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
        int depth = 0;
        
        if (root == NULL) return depth;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int size = q.size();
            depth++;
            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp -> left != NULL) q.push(temp -> left);
                if (temp -> right != NULL) q.push(temp -> right);
            }
        }
        
        return depth;
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