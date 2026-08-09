class MinStack {
   public:
    stack<int> st;
    stack<int> minSt;

    MinStack() {}

    void push(int val) {
        st.push(val);
        int minim = minSt.empty() ? val : min(val, minSt.top());
        minSt.push(minim);
    }

    void pop() { st.pop(); minSt.pop(); }

    int top() { return st.top(); }

    int getMin() { return minSt.top(); }
};
