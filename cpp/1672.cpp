class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int s=0,m=0;
        for(int i=0;i<accounts.size();i++){
            s=0;
            for(int j=0;j<accounts[i].size();j++){
                s+=accounts[i][j];
            }
            m=max(s,m);
        }
        return m;
    }
};