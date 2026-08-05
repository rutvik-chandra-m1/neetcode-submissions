static const int _fast = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class MinStack {
    vector<int> stk, mn;

   public:
    MinStack() {
        stk.reserve(30001);
        mn.reserve(30001);
    }
    void push(int val) {
        stk.push_back(val);
        mn.push_back(mn.empty() || val < mn.back() ? val : mn.back());
    }
    void pop() {
        stk.pop_back();
        mn.pop_back();
    }
    int top() const { return stk.back(); }
    int getMin() const { return mn.back(); }
};