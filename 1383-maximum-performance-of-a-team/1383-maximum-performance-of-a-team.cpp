class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int, int>> v;
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i = 0; i < n; i++){
            v.push_back({efficiency[i], speed[i]});
        }
        
        sort(v.begin(), v.end()); //sort according to efficiency and then iterate from backwards will always give us the minimum efficiency
        long long ans = 0, sum = 0;
        
        for(int i = n - 1; i >= 0; i--){
            sum = sum + v[i].second;
            pq.push(v[i].second);
            
            if(pq.size() > k){
                sum = sum - pq.top(); //min heap
                pq.pop();
            }
            
            ans = max(ans, sum * v[i].first); //always takes the minimum efficiency as we iterate from backwards and sorting done according to the efficiency
        }
        return ans % 1000000007;
    }
};