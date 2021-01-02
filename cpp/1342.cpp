class Solution {
public:
    int numberOfSteps (int num) {
        int c=0;
        while(num>0){
            c++;
            if(num & 1) --num;
            else num >>=1;
        }
        return c;
    }
};