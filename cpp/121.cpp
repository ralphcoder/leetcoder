class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int m=INT_MAX,h=0;
        for(auto i:prices) m=min(i,m),h=max(i-m,h);    
        return h;
    }
};