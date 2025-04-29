class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        int l=1, r=piles[piles.size()-1], m=0, min=r;
        long temp=0;
        while(l<=r){
            m=(l+r)/2;
            for(int i=0; i<piles.size(); i++){
                temp+=(piles[i]+m-1)/m;
            }
            if(temp<=h){
                min=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
            temp=0;
        }
        return min;
    }
};