class Solution {
public:
    int heightChecker(vector<int>& h,int c=0) {
        vector<int> arr=h;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)c+=arr[i]!=h[i];
        return c;
    }
};