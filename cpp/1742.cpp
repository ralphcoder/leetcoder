class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int hash[46]={},m=0;
        for(int i=lowLimit;i<=highLimit;i++){
            int d=i,s=0;
            while(d!=0){
                s+=d%10;
                d/=10;
            }
            m=max(m,++hash[s]);
        }
        return m;
    }
};