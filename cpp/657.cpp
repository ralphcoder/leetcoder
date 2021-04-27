//4 ms faster using variable 
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0;
        for(auto i:moves)
           x+=i=='R'?1:i=='L'?-1:0,y+=i=='U'?1:i=='D'?-1:0;
        return x==0 && y==0;
    }
};

//16 ms using hash

class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char,int> hash;
        for(auto i:moves) hash[i]++;
        return hash['R']==hash['L'] && hash['U']==hash['D'];
    }
};