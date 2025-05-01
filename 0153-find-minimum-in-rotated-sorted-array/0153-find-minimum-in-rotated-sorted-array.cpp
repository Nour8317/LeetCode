class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int l=0, r=nums.size()-1,m=0;
        while(l<r){
            m=(l+r)/2;
            if(nums[m]>nums[r]){
                l=m+1;
            }else{
                r=m;
            }
        }
        return nums[l];
    }
};