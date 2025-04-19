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
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* current = nullptr;
        if(!root){
            return current;
        }
        TreeNode* temp = nullptr;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            current = q.front();
            q.pop();
            temp = current->right;
            current->right = current->left;
            current->left = temp;
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
         
        return root;
    }
};