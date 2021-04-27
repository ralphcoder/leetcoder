class Solution {
public:
    string reverseWords(string s) {
        int f = 0;
        for(int i = 0; i <= s.length(); ++i)
            if(i == s.length() || s[i] == ' ')
                reverse(&s[f], &s[i]),f=i+1; 
        return s;
    }
};