class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i:s){
            if(i=='(')st.push(')');
            else if(i=='{')st.push('}');
            else if(i=='[')st.push(']');
            else {
                if(st.empty() || st.top()!=i)return false;
                else st.pop();
        }
    }
        return st.empty();
    }
};