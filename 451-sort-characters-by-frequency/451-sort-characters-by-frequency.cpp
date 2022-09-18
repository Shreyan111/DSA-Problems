class Solution {
public:
    string frequencySort(string s) {
        map<char, int> maps;
        
        for(int i = 0; i < s.size(); i++){
            maps[s[i]]++;
        }
        
        priority_queue<pair<int,char>> pq;
        
        for(auto it = maps.begin(); it != maps.end(); it++)
        {
            pq.push(make_pair(it -> second, it -> first));
        }
        
        string ans = "";
        
        while(!pq.empty()){
            int n = pq.top().first;
            while(n--)
            {
                ans.push_back(pq.top().second); //pushes in string until frequency becomes 0
            }
             pq.pop();
        }
        return ans;
    }
};