class Solution {
public:
    string sortSentence(string s) {
        vector<string>res(10,"");
        string s1="";
        for(int i=0;i<s.size();i++){
            if(!isdigit(s[i]))s1+=s[i];
            else res[s[i]-'0']=s1,s1="",i++;
        }
        for(int i=1;i<10;i++) if(res[i].size()>0)s1+=res[i]+" ";
        s1.pop_back();
        return s1;
    }
};