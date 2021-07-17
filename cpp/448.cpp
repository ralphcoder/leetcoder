class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            int m=abs(nums[i])-1;
            nums[m]*=nums[m]>0?-1:1;
        }
        for(int i=0;i<n;i++)
            if(nums[i]>0)res.push_back(i+1);
        return res;
    }
};