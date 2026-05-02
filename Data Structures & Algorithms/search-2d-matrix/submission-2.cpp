class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ROWS, COLS;
        ROWS = matrix.size();
        COLS = matrix[0].size();

        int l = 0, r = ROWS*COLS - 1;

        while (l <= r) {
            int mid = l + (r - l) / 2;
            int row = mid / COLS;
            int col = mid % COLS;

            if (matrix[row][col] == target) {
                return true;
            } else if (target > matrix[row][col]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
};
