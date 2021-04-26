class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<bool> row(m), col(n);
        for(auto& i:indices)
            row[i[0]]=!row[i[0]],col[i[1]]=!col[i[1]];
        int nr=accumulate(row.begin(),row.end(),0);
        int nc=accumulate(col.begin(),col.end(),0);
        return nc*m+nr*n-2*nc*nr;
    }
};