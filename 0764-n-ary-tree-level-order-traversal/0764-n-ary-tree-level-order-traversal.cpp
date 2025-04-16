/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int qlen = q.size();
            for(int i=0; i<qlen; i++){
                Node* node = q.front();
                q.pop();
                if(node){
                    level.push_back(node->val);
                    for(Node* c : node->children){
                        q.push(c);
                    }
                }
            }
            if(level.size()>0){
                ans.push_back(level);

            }
        }
        return ans;
    }
};