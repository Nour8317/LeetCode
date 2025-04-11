class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        bool flag = false;
        int p = 1;
        int count=0;
        int index=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                p*=nums[i];
            }else if(nums[i]==0){
                flag = true;
                index=i;
                count++;
            }
        }
        if(count>=2){
            return ans;
        }
        if(flag){
            ans[index]=p;
            return ans;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                ans[i]=p;
            }
            if(nums[i]!=0){
                ans[i]=p/nums[i];
            }
        }
        
        return ans;
    }
};