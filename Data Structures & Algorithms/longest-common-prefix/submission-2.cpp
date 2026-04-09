class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string prefix = strs[0];
        for(int j=1;j<strs.size();j++){
            int i=0;
            while(i<prefix.size() && i<strs[j].size() && prefix[i]==strs[j][i]){
                i++;
            }
            prefix=prefix.substr(0,i);
        }
        return prefix;
    }
};