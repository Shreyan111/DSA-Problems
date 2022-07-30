class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int ans = 0;
        unordered_map<char, int> map;
        
        while(j < n){
            map[s[j]]++;
            
            while(map.size() == 3){
                ans = ans + (n - j); //(4 + 3 + 2 + 1)
                map[s[i]] > 1 ? map[s[i]]-- : map.erase(s[i]);
                i++;
            }  
            j++;
        }
        return ans;
    }
};