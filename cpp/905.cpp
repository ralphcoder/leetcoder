class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int l=A.size()-1;
        for(int i=0;i<l+1;i++) if(A[i]%2!=0) swap(A[i--],A[l--]);
        return A;
    }
};