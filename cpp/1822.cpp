//Direct Approach
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign=1;
        for(int i:nums){
            if(i<0)sign*=-1;
            else if(i==0)return 0;
        }
        return sign;
    }
};


//Using STL
class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(find(nums.begin(),nums.end(),0)!=nums.end())return 0;
        int x=count_if(nums.begin(),nums.end(),[&](auto i){return i<0;});
        return x%2==0?1:-1;
    }
};