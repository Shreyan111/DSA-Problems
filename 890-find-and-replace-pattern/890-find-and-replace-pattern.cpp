class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n = pattern.size();
        vector<string> ans;
        
        for(string &s : words)
        {
            int count = 0;
            unordered_map<char, char> map1;
            unordered_map<char, char> map2;
            
            for(int i = 0; i < n; i++)
            {
                if(map1.count(s[i]) == 0 && map2.count(pattern[i]) == 0) {
                    map1[s[i]] = pattern[i];
                    map2[pattern[i]] = s[i];
                    count++;
                }
                
                else if(map1.count(s[i]) == 1 && map2.count(pattern[i]) == 1) {
                    if(map1[s[i]] == pattern[i])
                        count++;
                    else
                        break;
                }
                
                else{
                    break;
                }
            }
            
            if(count == n){
                ans.push_back(s);
            }
        }
        return ans;
    }
};
