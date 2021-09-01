class Solution {
public:
    bool isPalindrome(int x) {
        long d=x,s=0;
        while(d>0){
            s=s*10+d%10;
            d/=10;
        }
        return s==x;
    }
};