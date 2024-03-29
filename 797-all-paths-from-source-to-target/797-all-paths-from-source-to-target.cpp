class Solution {
public:
    void dfs(int i, vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>&path){
        path.push_back(i);
        if(i == graph.size() - 1){
            ans.push_back(path);
        }
       
        for(auto x : graph[i]){
            dfs(x, graph, ans, path);
        }
        
        path.pop_back(); //backtrack
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        dfs(0, graph, ans, path);
        return ans;
    }
};