class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left, right;
        left = 0;
        right = n - 1;
        int mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid+1;
            }
        }
        return -1;
    }
};
