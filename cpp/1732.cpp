class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int alt=0,calt=0;
        for(auto i:gain){
            calt+=i;
            alt=max(alt,calt);
        }
        return alt;
    }
};