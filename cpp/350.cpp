class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> hash;
        for(auto i: nums1) hash[i]++;
        for(auto i: nums2) if(hash[i]-->0) res.push_back(i);
        return res;
    }
};