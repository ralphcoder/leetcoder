class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> res (arr.size());
        int k=0,c=0;
        while(k<arr.size()){
            if(arr[c]==0) res[k++]=0;
            if(k<arr.size()) res[k++]=arr[c++];
        }
        arr=res;
    }
};