class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int hash[26]={}, m=0;
        for(auto i:s) m=max(m,++hash[i-'a']);
        return all_of(begin(hash),end(hash), [&m](int t){return t==0||t==m;});
    }
};