class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;

        for (auto i : stones) {
            heap.push(i);
        }

        while (heap.size() > 1) {
            int one = heap.top();
            heap.pop();
            int two = heap.top();
            heap.pop();

            if (one != two) {
                heap.push(one - two);
            }
        }

        return heap.empty() ? 0 : heap.top();
    }
};
