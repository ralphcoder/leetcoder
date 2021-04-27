class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[26]={},c=0;
        for(auto i: sentence) if(++arr[i-'a']==1)c++;
        return c==26;
    }
};