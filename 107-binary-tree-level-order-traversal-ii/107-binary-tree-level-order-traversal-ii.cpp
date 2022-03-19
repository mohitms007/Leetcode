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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        
        if(root == NULL) {
            return ans;
        }
        int depth = 0;
        queue<TreeNode*> lOrder;
        
        lOrder.push(root);
        
        while(!lOrder.empty()){
                depth++;
            int size=  lOrder.size();
             vector<int> currLevel; 
            for(int i=0;i<size;i++){
                TreeNode* first = lOrder.front();
                lOrder.pop();
                currLevel.push_back(first->val);
                if(first->left){
                    lOrder.push(first->left);
                }
                if(first->right) {
                    lOrder.push(first->right);
                }
            }
            ans.push_back(currLevel);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};