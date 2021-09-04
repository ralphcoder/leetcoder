class Solution {
public:
    int search(vector<int>& nums, int target) {
        int a=0,b=nums.size()-1,mid;
        while(a<=b){
            mid=a+(b-a)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>target) b=mid-1;
            if(nums[mid]<target) a=mid+1; 
        }
        return -1;
    }
};