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
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(!root){
            return nullptr;
        }
        int level =0;
        queue<TreeNode*> q;
        int temp,size = 0;
        TreeNode* current = root;
        q.push(current);
        while(!q.empty()){
            vector<TreeNode*> v;
            size = q.size();  
            for(int i=0; i<size; i++){
                current = q.front();q.pop();
                v.push_back(current);
                if(current->left)q.push(current->left);
                if(current->right)q.push(current->right);
            }
            if(level%2!=0){
                int n = v.size();
                for(int i=0; i<n/2; i++){
                    swap(v[i]->val,v[n-1-i]->val);
                }
            }
            level++;
        }
        return root;

    }
};