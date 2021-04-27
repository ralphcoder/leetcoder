class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> res;
        int f=0,l=s.size();
        for(auto i:s) res.push_back(i=='I'?f++:l--);
        res.push_back(f);
        return res;
    }
};

//Another solution

class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
        for (int l = 0, h = S.size(), i = 0; i <= S.size(); ++i)
            res.push_back(i == S.size() || S[i] == 'I' ? l++ : h--);
        return res;
    }
};