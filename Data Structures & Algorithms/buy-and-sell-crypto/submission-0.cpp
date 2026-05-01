class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int minimum=INT_MAX;
        int maxProfit=INT_MIN;

        for(auto i:prices){
            minimum=min(minimum,i);
            maxProfit=max(maxProfit,i-minimum);
        }

        return maxProfit;
    }
};
