class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int left, right;

        for (int i = 0; i < n; i++) {
            left = i+1;
            right = n - 1;
            if (nums[i] > 0) break;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            while (left < right) {
                int sum = nums[left] + nums[right] + nums[i];
                if (sum > 0) {
                    right--;
                } else if (sum < 0) {
                    left++;
                } else {
                    ans.push_back({nums[left], nums[right], nums[i]});
                    left++;
                    right--;
                    while(left <right && nums[left]==nums[left-1]){
                        left++;
                    }
                }
            }
        }
        return ans;
    }
};
