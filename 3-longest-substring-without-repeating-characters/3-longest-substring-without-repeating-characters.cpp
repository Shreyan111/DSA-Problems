// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         map<char, int> ans;
//         int maxLen = 0;
//         int start = 0;
//         int end;
 
//         for(end = 0; end < s.length(); end++)
//         {
//             if (ans.find(s[end]) != ans.end())
//             {
//                 start = max(start, ans[s[end]] + 1);
//             }
            
//             ans[s[end]] = end;
//             maxLen = max(maxLen, end - start + 1);
//         }
        
//         return maxLen;
//     }
// };

















class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<int, int> maps;
        int maxLen = 0;
        int start = 0;
        int end;
        
        for(int end = 0; end < s.length(); end++){
            if(maps.find(s[end]) != maps.end()){
                start = max(start, maps[s[end]] + 1);
            }
            
            maps[s[end]] = end;
            maxLen = max(maxLen, end - start + 1);
        }
        
        return maxLen;
    }
};