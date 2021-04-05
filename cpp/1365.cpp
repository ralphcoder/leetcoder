class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> hash(102,0);
        for(auto i:nums) hash[i]++;
        for(int i=1;i<102;i++) hash[i]+=hash[i-1];
        for(int i=0;i<nums.size();i++) nums[i]=hash[nums[i]-1];
        return nums; 
        }
};