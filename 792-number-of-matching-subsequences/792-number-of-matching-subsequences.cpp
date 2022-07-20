class Solution {
public:
    bool isMatched(string s, string word){
        int i = 0;
        int j = 0;
        while(j != word.size()){
            if(i == s.size()){
                return false;
            }
            if(s[i] == word[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return true;
    }
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<string, int> map;
        int n = words.size();
        int count = 0;
        
        for(int i = 0; i < n; i++){
            map[words[i]]++;
        }
        
        for(auto it:map){
            if(isMatched(s, it.first)){
                count = count + it.second;
            }
        }
        return count;
    }
};