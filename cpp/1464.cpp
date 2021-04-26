class Solution {
public:
    int maxProduct(vector<int>& nums) {
        auto m1=0,m2=0;
        for(auto i:nums){
            if(i>m1) m2=exchange(m1,i);
            else m2=max(m2,i);
        }
        return (m1-1)*(m2-1);
    }
};