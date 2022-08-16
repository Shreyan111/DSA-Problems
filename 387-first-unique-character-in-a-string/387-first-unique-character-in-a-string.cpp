class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> maps;
        
        for(int i = 0; i < s.length(); i++){
            maps[s[i]]++;
        }
        
        for(int i = 0; i < s.length(); i++){
            if(maps[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};