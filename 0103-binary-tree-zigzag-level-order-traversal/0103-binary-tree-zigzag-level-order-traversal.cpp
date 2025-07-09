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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        vector<int> temp;
        bool r=0;
        TreeNode* curr=root;
        queue<TreeNode*> q;
        q.push(curr);
        while(!q.empty()){
            int size = q.size();
            for(int i=0; i<size; i++){
                curr = q.front(); q.pop();
                temp.push_back(curr->val);
                if(curr->left){q.push(curr->left);}
                if(curr->right){q.push(curr->right);}
            }
            if(r){
                reverse(temp.begin(),temp.end());
            }
            ans.push_back(temp);
            temp.clear();
            r=!r;

        }
        return ans;
    }
};