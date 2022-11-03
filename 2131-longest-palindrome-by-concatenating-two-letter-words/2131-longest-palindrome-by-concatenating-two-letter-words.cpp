class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string, int>maps;
        
        for(string w : words){
            maps[w]++;
        }
        
        int count = 0;
        bool flag = false;
        
        for(string w : words){
            string x = w;
            reverse(x.begin(), x.end());
            
            if(x != w && maps[x] > 0 && maps[w] > 0 && maps.find(x) != maps.end()){
                maps[x]--;
                maps[w]--;
                count = count + 4;
            }
            
            else if (x == w && maps[x] > 1){
                count = count + 4;
                maps[x] = maps[x] - 2;
            }
            
            else if (x == w && flag == false && maps[x] > 0){
                count = count + 2;
                maps[x]--;
                flag = true;
            }
        }
        
        return count;
    }
};