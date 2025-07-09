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
    int minDepth(TreeNode* root) {
        int left,right=0;
       if(!root) return 0;
       left = minDepth(root->left);
       right = minDepth(root->right);
        if(!root->left||!root->right){
            return max(left,right)+1;
        }
       return min(left,right)+1;
    }
};