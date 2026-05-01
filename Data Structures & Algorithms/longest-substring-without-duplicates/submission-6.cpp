class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> window;

        int l = 0;
        int maxLen = 0;
        for (int r = 0; r < s.size(); r++) {
            while (window.find(s[r]) != window.end()) {
                window.erase(s[l]);
                l++;
            }
            int len = r - l + 1;
            window.insert(s[r]);
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};