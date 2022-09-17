class Solution {
public:
    vector<vector<int>> DIR = {
        {0, 1},
        {1, 1},
        {1, 0},
        {1, -1},
        {0, -1},
        {-1, -1},
        {-1, 0},
        {-1, 1}
    };
    int shortestPathBinaryMatrix(vector<vector<int>>& g) {
        int ans = 0;
        int n = g.size();
        int m = g[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m));
        
        if(g[0][0] == 1 || g[n - 1][m - 1] == 1){
            return -1;
        }
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        while(!q.empty()){
            ans++;
            int sz = q.size();
            for(int i = 0; i < sz; i++){
                auto temp = q.front();
                q.pop();
                int row = temp.first;
                int col = temp.second;
                if(row == n - 1 && col == m - 1) return ans;
                for(int k = 0; k < 8; k++){
                    int newR = row + DIR[k][0];
                    int newC = col + DIR[k][1];
                    
                    if(newR < 0 || newC < 0 || newR == n || newC == m || g[newR][newC] == 1 || vis[newR][newC]) continue;
                    q.push({newR, newC});
                    vis[newR][newC] = true;
                }
            }
        }
        return -1;
    }
};