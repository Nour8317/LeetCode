class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>temp;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                temp.push_back(matrix[i][j]);
            }
        }   
        int l=0,r=temp.size()-1,m=0;
        while(l<=r){
            m=(l+r)/2;
            if(temp[m]==target){
                return true;
            }
            else if(temp[m]<target){
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        return false;
    }
};