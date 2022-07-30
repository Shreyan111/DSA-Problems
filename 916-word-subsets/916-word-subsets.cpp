class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        unordered_map<char, int> map; //f
        
        for(int i = 0; i < words2.size(); i++)
        {
            unordered_map<char, int> temp;
            for(int j = 0; j < words2[i].size(); j++){
                temp[words2[i][j]]++; //storing the characters of word 2 in a map
            }
            
            for(auto x:temp)
                if(x.second > map[x.first]){
                    map[x.first] = x.second; //storing the frequency of characters in the map
                }
            temp.clear();
        }
        
        for(int i = 0; i < words1.size(); i++)
        {
            bool flag = false;
            unordered_map<char, int> mp;
            for(int j = 0; j < words1[i].size(); j++){
                mp[words1[i][j]]++; //storing the characters of word 1 in a map
            }
            for(auto x:map)
                //checking if character or string in word 2 occurs same number of times(frequency) in words1 then push the word in the vector
                if(mp[x.first] == 0 || mp[x.first] < x.second)
                {
                    flag = true; 
                    continue;
                }
            if(flag == 0){
                ans.push_back(words1[i]);
            }
            mp.clear();
        }
        return ans;
    }
};