class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> operators{"+", "-", "*", "/"};
        stack<int>st;

        for (string &x : tokens) {
            if(operators.find(x) == operators.end()){
                st.push(stoi(x));
            }
            else{
                int a = st.top(); st.pop();
                int b = st.top(); st.pop();
                int result;
                if(x == "+") result = b + a;
                else if(x == "-") result = b - a;
                else if(x == "*") result = a * b;
                else result = b / a;
                st.push(result);
            }
        }
        return st.top();
    }
};
