class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        int hash[26]={};
        for(int i=0;i<s.size();i++) hash[s[i]-'a']+=1,hash[t[i]-'a']--;
        return count_if(hash,hash+26,[&](auto i){return i==0;})==26;
    }
};