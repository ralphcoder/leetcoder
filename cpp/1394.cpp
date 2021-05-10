class Solution {
public:
    int findLucky(vector<int>& arr) {
        int hash[501]={},res=-1;
        for(auto i:arr)hash[i]++;
        for(int i=1;i<=500;i++)if(i==hash[i])res=i;
        return res;
    }
};