class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> hash;
        for(auto& i: paths) hash.insert(i[0]);
        for(auto& i: paths) 
            if(hash.find(i[1])==hash.end()) return i[1];
        return " ";
    }
};