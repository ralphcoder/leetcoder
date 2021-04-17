class Solution {
public:
    int maxDepth(string s) {
        int c=0,d=0;
        for(auto i:s){
            c+=i=='('?1:i==')'?-1:0;
            d=max(d,c);
        }
        return d;
    }
};