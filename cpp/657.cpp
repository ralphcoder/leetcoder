class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto i:moves){
        x+=(i=='R')?+1:(i=='L')?-1:0;
        y+=(i=='U')?+1:(i=='D')?-1:0;
        }
        cout<<x<<" "<<y;
        return x==0 && y==0;
    }
};