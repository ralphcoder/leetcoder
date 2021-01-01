// O(nlogn) Approach:

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i]*=nums[i];
        sort(nums.begin(),nums.end());
        return nums;
    }
};
// O(n) Approach:

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=nums.size()-1;
        vector<int> res (nums.size());
        while(i<=j){
            if(abs(nums[i])<=abs(nums[j])){
                res[k]=nums[j]*nums[j];
                j--;
            }
            else{
                res[k]=nums[i]*nums[i];
                i++;
            }
            k--;
        }
        return res;
    }
};