class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        int first,last;
        first=0;
        last=n-1;

        vector<int>ans;
        while(first<last){
            int sum=numbers[first]+numbers[last];

            if(sum==target){
                ans.push_back(first+1);
                ans.push_back(last+1);
                break;
            }else if(sum>target){
                last--;
            }else{
                first++;
            }
        }
        return ans;
    }
};
