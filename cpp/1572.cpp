class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0,n=mat.size();
        for(int i=0;i<mat.size();i++)
            s+=(i==n-i-1)?mat[i][i]:mat[i][i]+mat[i][n-i-1];
        return s;
    }
};