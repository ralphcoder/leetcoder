//1st method 
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int s=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<=nums[i]){
                s+=nums[i]-nums[i+1]+1;
                nums[i+1]+=nums[i]-nums[i+1]+1;
            }    
        }
        return s; 
    }
};

//2nd Method

int minOperations(vector<int>& nums) {
    int res = 0, last = 0;
    for (auto n : nums) {
        res += max(0, last - n + 1);
        last = max(n, last + 1);
    }
    return res;
}
