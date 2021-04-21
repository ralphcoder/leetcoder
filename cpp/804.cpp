class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> en={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
         string s="";
        unordered_set<string> hash;
        for(auto i:words){
            s="";
            for(auto j:i) s+=en[j-'a'];
            hash.insert(s);
        }
        return hash.size();
    }
};