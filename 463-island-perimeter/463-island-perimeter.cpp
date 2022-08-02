class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& ans){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            ans++;
            return;
        }
        
        if(grid[i][j] == 2){
            return;
        }
        
        grid[i][j] = 2;
        //4 directions
        dfs(grid, i + 1, j, ans);
        dfs(grid, i - 1, j, ans);
        dfs(grid, i, j + 1, ans);
        dfs(grid, i, j - 1, ans);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1){
                    int ans = 0;
                    dfs(grid, i, j, ans);
                    return ans;
                }
            }
        }
        return 0;
    }
};