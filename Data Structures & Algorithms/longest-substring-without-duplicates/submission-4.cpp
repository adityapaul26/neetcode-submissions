class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0) return 0;
        unordered_map<int, int> present;

        int count, maxCount;
        count = 0;
        maxCount = 0;

        for(int j = 0; j < s.length(); j++){
            char i = s[j];
            if(present.find(i)!=present.end()){
                maxCount=max(maxCount,count);
                j = present[i];
                count=0;
                present.clear();
            }else{
                present[i]=j;
                count++;
                maxCount=max(maxCount,count);
            }
            maxCount=max(maxCount,count);
        }

        return maxCount;
    }
};