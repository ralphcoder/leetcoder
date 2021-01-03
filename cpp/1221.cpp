class Solution {
public:
    int balancedStringSplit(string s) {
        int p=0,c=0;
        for(auto i: s){
            p+=(i=='R')?1:-1;
            if(p==0)c++;
        }
        return c;
    }
};