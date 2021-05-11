class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0,res;
        for(auto i:nums){
            if(!c)res=i;
            c+=res==i?1:-1;
        }
        return res;
    }
};