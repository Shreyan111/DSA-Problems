class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prefix = "";
        int j = 0;
        sort(strs.begin() , strs.end());
        string strs1 = strs[0];
        string strs2 = strs[n - 1];
        
        for(int i = 0; i < strs[0].size(); ++i){
            if(strs1[i] == strs2[j]){
                prefix += strs1[i]; 
            }
            else{
                break;
            }
            ++j;
        }
    return prefix;
    }
};