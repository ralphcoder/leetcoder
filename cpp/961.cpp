class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> hash;
        for(auto i:A)
            if(++hash[i]>1)return i;
        return 0;
    }
};