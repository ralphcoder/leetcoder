class Solution {
public:
    int numberOfMatches(int n) {
        int c=0;
        while(n>=2){
            if(n & 1) c-=1;
            n=(n & 1)?(n-1)/2+1:n/2;
            c+=n;
        }
        return c;
    }
};

// O(1)
class Solution {
public:
    int numberOfMatches(int n) {
        return n-1;
    }
};