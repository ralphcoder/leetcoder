class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int,int> hash;
        for(auto i:A){
            hash[i]++;
            if(hash[i]>1)return i;
        }
        return 0;
    }
};