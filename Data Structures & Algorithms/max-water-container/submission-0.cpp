class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxVol=INT_MIN;
        int n=heights.size();
        int left,right;
        left=0;
        right=n-1;

        while(left<right){
            maxVol=max(min(heights[left],heights[right])*(right-left),maxVol);
            if(heights[left]<=heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxVol;
    }
};
