class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            int d=i,c=0;
            while(d!=0){
                int r=d%10;
                if(r==0 || i%r!=0)break;
                d/=10;
            }
            if(d==0)res.push_back(i);
        }
        return res;
    }
};