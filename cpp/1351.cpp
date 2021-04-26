class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans(0);
        
        // Brute Force: O(mn) - check if negative
        for (const vector<int>& row: grid)
            for (const int& i: row)
                if (i < 0) ans++;
        return ans;
        
        // Binary Search: O(m lg(n)) or equivalently O(n lg(m)) - look for break point of each row / column
        for (const vector<int>& row: grid)
            ans += upper_bound(row.rbegin(), row.rend(), -1) - row.rbegin();
        return ans;
        
        // Search Break Points: O(m + n) - traverse from lower left corner
        int m=grid.size(),n=grid[0].size(),r=m-1,c=0,cnt=0;
        while(r>=0 && c<n){
            if(grid[r][c]<0)cnt+=n-c,r-=1;
            else c++;
        }
        return cnt;
    }
};