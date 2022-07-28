class Solution {
    bool isAnan(string &s1, string &s2){
        if(s1.size() != s2.size()){
            return false;
        }
        unordered_map<char, int> map;
        for(int i = 0; i < s1.size(); i++){
            map[s1[i]]++;
            map[s2[i]]--;
        }
        for(auto it:map){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
public:
    vector<string> removeAnagrams(vector<string>& words) {
        while(true){
            bool flag = true;
            int i = 0;
            while(i < words.size() - 1){
                if(isAnan(words[i], words[i+1])){
                    words.erase(words.begin() + i + 1);
                    flag = false;
                }
                else{
                    i++;
                }
            }
            if(flag || !flag) break;
        }
        
        return words;
    }
};