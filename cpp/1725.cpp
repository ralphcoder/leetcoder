class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int maxLen=0,c=0;
        for(auto i:rectangles){
            int t= min(i[0],i[1]);
            if(t > maxLen) maxLen=t,c=1;
            else if(maxLen==t) c++;
        }
        return c;
    }
};