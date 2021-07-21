class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> res,hash(26,0);
        int li=0,c=0;
         for(int i=0;i<s.size();i++) hash[s[i]-'a']=i;
         for(int i=0;i<s.size();i++) {
             li=max(li,hash[s[i]-'a']);
             if(li==i)res.push_back(li-exchage(c,i+1)+1);
         }
    }
};