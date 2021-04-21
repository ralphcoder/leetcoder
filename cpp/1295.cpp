class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(auto i: nums) if(!((int)floor(log10(i) + 1) & 1)) c++;
        return c;
    }
};