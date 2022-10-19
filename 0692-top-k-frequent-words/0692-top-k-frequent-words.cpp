class Solution {
public:
    static bool comp(pair<string, int> &p1, pair<string, int> &p2){
        // sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.
        if(p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first)){
            return true;
        }
        else{
            return false;
        }
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string, int> maps;
        for(auto word : words){
            maps[word]++;
        }
        
        vector<pair<string, int>>v;
        for(auto i = maps.begin(); i != maps.end();i++){
            v.push_back({i -> first, i -> second});
        }
        
        sort(v.begin(), v.end(), comp);
        
        vector<string> s;
        for(int i = 0; i < k; i++){
            s.push_back(v[i].first);
        }
        return s;
    }
};