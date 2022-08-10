class Solution {
public:
     void dfs(vector<int> adj[], vector<bool>&visited, int z)
    {
        visited[z] = true;
        
         //using for each loop iterate through each 
        for(auto x : adj[z])
        {
            if(visited[x] == false)
            {
                dfs(adj, visited, x );
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        int k = connections.size();
        
        if(k < n - 1){
            return -1;
        }
        
        vector<bool>visited(n, false);
        
        vector<int> adj[n];
        
        for(int i = 0; i < connections.size(); i++)
        {
            int u = connections[i][0];
            int v = connections[i][1];
            
            //vector is used for creating the adjacency list
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(visited[i] == false)
            {
                count++;
                dfs(adj, visited, i);
            }
        }
        return count - 1;
    }
};