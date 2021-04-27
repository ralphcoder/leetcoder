class Solution {
public:
    int sumOfUnique(vector<int>& nums,int s=0) {
        unordered_map<int,int> hash;
        int s=0;
        for(auto i: nums)
            hash[i]++,s+=hash[i]==1?i:hash[i]==2?-i:0;
        return s;
    }
};