class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> j;
        int c=0;
        for(auto i:jewels)j[i]++;
        for(auto i:stones) if(j[i]>0)c++;
        return c;
    }
};