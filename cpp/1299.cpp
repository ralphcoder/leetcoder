class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=-1;
        for(int i=arr.size()-1;i>=0;i--) 
            m=max(m,exchange(arr[i],m));
        return arr;
    }
};