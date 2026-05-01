class MinStack {
   private:
    stack<int> st;
    stack<int> minStack;

   public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (minStack.empty()) {
            minStack.push(val);
        } else {
            minStack.push(min(minStack.top(), val));
        }
    }

    void pop() { st.pop();minStack.pop(); }

    int top() { return st.top(); }

    int getMin() { return minStack.top(); }
};
