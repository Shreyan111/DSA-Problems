class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> maps;//ordered map stores in ordered value according to the key
        
        for(auto i: nums){
            maps[i]++;
        }
        
        priority_queue<pair<int, int>> pq;//max heap
        
        for(auto it: maps){
            pq.push(make_pair(it.second, it.first)); //priority queue takes the first value and orders it according to the first pair
        }
        
        vector<int> ans;
        
        while(k != 0){
            auto x = pq.top();
            ans.push_back(x.second);
            pq.pop();
            k--;
        }
        return ans;
    }
};