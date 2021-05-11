//Using Builtin
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};

//Using Bit trick

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c=0;
        while(n) n&=n-1,c++;
        return c;
    }
};