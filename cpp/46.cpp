class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        dfs(0,nums,res);
        return res;
    }
    void dfs(int pos,vector<int> &num, vector<vector<int>> &res){
        if(pos==num.size())res.push_back(num);
        else{
            for(int i=pos;i<num.size();i++){
                swap(num[i],num[pos]);
                dfs(pos+1,num,res);
                swap(num[i],num[pos]);
            }
        }
    }
};