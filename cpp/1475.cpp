class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int> s;
        for(int i=0;i<p.size();i++){
            while(s.size() && p[s.back()]>=p[i]) p[s.back()]-=p[i],s.pop_back();
            s.push_back(i);
            }
        return p;
        }
};