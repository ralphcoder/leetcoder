class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(auto &i:nums)i=i+n*(nums[i]%n);
        for(auto &i:nums)i/=n;
        return nums;
    }
};