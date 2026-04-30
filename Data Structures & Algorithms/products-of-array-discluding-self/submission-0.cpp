class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> first(n);
        vector<int> last(n);
        vector<int> res(n);

        first[0]=1;
        for(int i=1;i<n;i++){
            first[i]=first[i-1]*nums[i-1];
        }

        last[n-1]=1;
        for(int i=n-2;i>=0;i--){
            last[i]=last[i+1]*nums[i+1];
        }

        for(int i=0;i<n;i++){
            res[i]=first[i]*last[i];
        }

        return res;
    }
};
