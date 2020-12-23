// O(n^2)
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++)
                if(i!=j && nums[i]>nums[j])c++;
            res.push_back(c);
        }
        return res;
    }
};