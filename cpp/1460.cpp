//Using hashing
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int hash[1001]={};
        for(int i=0;i<arr.size();i++) hash[arr[i]]++,hash[target[i]]--;
        for(int i=0;i<=1000;i++) if(hash[i]!=0)return false;
        return true;
    }
};
//using Multiset
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        return unordered_multiset<int>(target.begin(),target.end())==unordered_multiset<int>(arr.begin(),arr.end());
    }
};