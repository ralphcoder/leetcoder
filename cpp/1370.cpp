class Solution {
public:
    string sortString(string s) {
        vector<int> hash(26);
        string res="";
        for(auto i:s) hash[i-'a']++;
        while(res.size()<s.size()){
            for(int i=0;i<26;i++)
                res+=string(--hash[i]>=0?1:0,'a'+i);
            for(int i=25;i>=0;i--)
                res+=string(--hash[i]>=0?1:0,'a'+i);
        }
        return res;
    }
};