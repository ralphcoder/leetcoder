// 0 sec
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int pair=0,c=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) c++;
            else{
                pair+=(c*(c+1))/2;
                c=0;
            }  
        }
        pair+=(c*(c+1))/2;
        return pair;
    }
};
// 4 sec
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++)
                if(nums[i]==nums[j])c++;
        }
        return c;
    }
};