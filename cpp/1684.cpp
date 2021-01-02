class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> hash (26);
        int f=1,c=0;
        for(auto i:allowed)hash[i-'a']++;
        for(auto i: words){
            f=1;
            for(auto j:i){
                if(!hash[j-'a']){ f=0; break;} 
            }
            c+=f;
        }
        return c;
    }
};