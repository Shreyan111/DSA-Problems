class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& a) {
        a.push_back({target, 0});
        int n = a.size();
        priority_queue<int> pq;
        int max_range = startFuel;
        int steps = 0;
        for(int i = 0; i < n; i++){
            while(a[i][0] > max_range){
                if(pq.empty()) return -1;
                max_range += pq.top();
                pq.pop();
                steps++;
            }
            pq.push(a[i][1]);
            
            if(max_range >= target) return steps;
        }
        return -1;
    }
};