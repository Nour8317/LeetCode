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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<TreeNode*> q;
        TreeNode* curr;
        curr = root;
        q.push(curr);
        vector<int> temp;
        // temp.push_back(curr->val);    
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                curr = q.front(); q.pop();
                temp.push_back(curr->val);    
                if(curr->left) q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            ans.push_back(temp);
            cout<<temp.size()<<endl;
            temp.clear();
        }
    
        return ans;
    }
};