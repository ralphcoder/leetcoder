class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int al=0,la=0;
        for(auto i:gain){
            al+=i;
            la=max(la,al);
        }
        return la;
    }
};