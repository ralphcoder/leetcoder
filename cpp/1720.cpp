class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        int temp;
        res.push_back(first);
        for(auto i: encoded){
            temp=i^first;
            res.push_back(temp);
            first=temp;
        }
        return res;
    }
};