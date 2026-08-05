class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if (mp.find(need) != mp.end()) {
                ans[0] = i;
                ans[1] = mp[need];
            } else {
                mp[nums[i]] = i;
            }
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
