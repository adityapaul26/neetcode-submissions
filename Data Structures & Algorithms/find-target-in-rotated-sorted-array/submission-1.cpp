class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int pivot;

        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        pivot = left;

        if (target >= nums[pivot] && target <= nums[n - 1]) {
            int l = pivot;
            int r = n - 1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (target == nums[mid])
                    return mid;
                else if (target > nums[mid]) {
                    l = mid + 1;
                } else {
                    r = mid-1;
                }
            }
        } else {
            int l = 0;
            int r = pivot - 1;

            while (l <= r) {
                int mid = (l + r) / 2;
                if (target == nums[mid])
                    return mid;
                else if (target > nums[mid]) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }

        return -1;
    }
};
