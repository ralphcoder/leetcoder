class Solution {
public:
    bool halvesAreAlike(string s) {
        int c=0;
        string v="aeiouAEIOU";
        for(int i=0;i<s.size();i++){
                if(v.find(s[i])!=string::npos){                                                             if(i<s.size()/2) c++;
                    else c--;
                }
        }
        return c==0;
    }
};