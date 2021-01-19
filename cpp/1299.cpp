class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size()-1;
        vector<int> res (arr.size());
        int g=arr[n];
        res[n]=-1;
        for(int i=arr.size()-1;i>0;i--){
            g=max(arr[i],g);
            res[--n]=g;
        }
        return res;
    }
};