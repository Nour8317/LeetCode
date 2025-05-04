class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int left=0, maxSize=0;
      if(s.length()==0){
        return 0;
      }
      set<char>set;
      for(int right=0; right<s.size(); right++){
        while(set.find(s[right]) != set.end()){
            set.erase(s[left]);
            left++;
        }
        maxSize = max(maxSize,right-left+1);
        set.insert(s[right]);
      } 
      return maxSize; 
    }
};