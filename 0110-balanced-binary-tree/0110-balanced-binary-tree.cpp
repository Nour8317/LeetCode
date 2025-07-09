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
 #include <cmath>
class Solution {
public:
    int depth(TreeNode* root){
        if(!root)return 0;
        int l=depth(root->left);
        if(l==-1)return l;
        int r=depth(root->right);
        if(r==-1)return r;
        if(abs(l-r)>1) return -1;
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        return depth(root)!=-1;
    }
};
