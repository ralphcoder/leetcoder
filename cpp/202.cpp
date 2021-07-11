class Solution {
public:
    bool isHappy(int n) {
        while(n>9){
            int s=0;
            while(n!=0)s+=pow(n%10,2),n/=10;
            n=s;
        }
        return n==1||n==7?true:false;
    }
};