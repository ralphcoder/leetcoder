class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int res=0;
        int c=ruleKey=="type"?0:ruleKey=="color"?1:2;
        return count_if(items.begin(),items.end(),[&](auto &i){ return i[c]==ruleValue;});
    }
};