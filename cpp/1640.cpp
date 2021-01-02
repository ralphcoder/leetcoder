class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int,vector<int>> hash;
        vector<int> res;
        for(auto i: pieces) hash[i[0]]=i;
        for(auto i: arr){
            if(hash.find(i)!=hash.end())
             res.insert(res.end(),hash[i].begin(),hash[i].end());
        }
        return res==arr;
    }
};