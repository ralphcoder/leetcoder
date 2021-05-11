class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> hash;
        for(auto i:nums) if(++hash[i]>1)return true;
        return false;
    }
};

//One liner

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size()>unordered_set<int>(nums.begin(),nums.end()).size();
    }
};