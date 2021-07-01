class Solution {
public:
    int titleToNumber(string s,int r=0) {
        for(auto i:s) r=r*26+(i-'A'+1);
        return r;
    }
};