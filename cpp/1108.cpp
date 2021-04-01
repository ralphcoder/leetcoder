class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(auto i: address)
            s+=(i=='.')?"[.]":string(1,i);
        return s;
    }
};