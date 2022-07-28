class Solution {
public:
    bool dfs(int node,vector<vector<int>>& graph,vector<int>&color){
        if(color[node] == -1) color[node] = 1; //assign color 1
        for(auto it : graph[node]){
            if(color[it] == -1) {
                color[it] = 1 - color[node]; //assign opposite colors to the adjacent nodes
            if(!dfs(it, graph, color)) return false;
            }
            if(color[it] == color[node]) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(), -1);
        for(int i = 0; i < graph.size(); i++){
            if(color[i] == -1)
                if(!dfs(i, graph, color)) return false;
        }
        return true;
    }
};