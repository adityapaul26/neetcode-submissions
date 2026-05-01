class Solution {
   public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;

        int l = 0;
        int maxLen = 0;
        int mfreq = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            mfreq = max(mfreq, mp[s[r]]);

            while ((r - l + 1) - mfreq > k) {
                mp[s[l]]--;
                l++;
            }
            maxLen=max(maxLen,r-l+1);
        }
        return maxLen;
    }
};
