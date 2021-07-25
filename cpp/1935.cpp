class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int hash[26]={},f=0,s=0;
        for(auto i:brokenLetters) hash[i-'a']++;
        text=text+" ";
        for(auto i:text){
            if(i==' ')s+=f==1?0:1,f=0;
            else if(hash[i-'a']>0)f=1;
        }
        return s;
    }
};