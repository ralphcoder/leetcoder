class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        int s=0,l=S.length();
        for(auto i: S){
            if(i=='I') res.push_back(s++);
            else res.push_back(l--);
        }
        res.push_back(s);
        return res;
    }
};