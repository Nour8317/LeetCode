class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> ans;
        bool skip=0;
        for (int i = 0; i < grid.size(); i++) {
            if (i % 2 == 0) {
                // left to right
                for (int j = 0; j < grid[i].size(); j++) {
                    if(!skip) ans.push_back(grid[i][j]);
                    skip=!skip;
                    
                }
            } else {
                // right to left
                for (int j = grid[i].size() - 1; j >= 0; j--) {
                    if(!skip) ans.push_back(grid[i][j]);
                    skip=!skip;
                }
            }
        }

        return ans;
    }
};