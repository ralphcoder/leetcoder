class Solution {
public:
    int maxDepth(string s) {
        int cd=0,md=0;
        for(auto i: s){
            if(i=='(') cd++;
            if(i==')') cd--;
            md=max(md,cd);
        }
        return md;
    }
};