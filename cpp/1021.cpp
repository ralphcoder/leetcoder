class Solution {
public:
    string removeOuterParentheses(string S) {
        int c=0;string s="";
        for(auto i:S)
        if(i=='(' && c++ > 0 || i==')' && c-- > 1) s+=i;
        return s;
    }
};