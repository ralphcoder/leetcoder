class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0,r=0;
        for(auto i: nums){
            if(i==0)c=0;
            else c++;
            r=max(c,r);
        }
        return r;
    }
};