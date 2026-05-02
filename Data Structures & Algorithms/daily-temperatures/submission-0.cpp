class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> stack;
        vector<int> res(temperatures.size(),0);

        for(int i=0;i<temperatures.size();i++){
            int temp=temperatures[i];

            while(!stack.empty() && temp>stack.top().first){
                auto p= stack.top();
                stack.pop();
                res[p.second]= i-p.second;
            }

            stack.push({temp,i});
        }

        return res;
    }
};
