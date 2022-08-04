class Solution {
    void dfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int M, int N, int i, int j, int &check)
    {
        //condition for sub island
        if(grid2[i][j] == 1 && grid1[i][j] == 0){
            check = 0;
            return;
        }
        
        grid2[i][j] = 0; //setting grid value as 0 so that the island can be counted as once from grid 2 and it does not occur in our main calculation again
        if(i + 1 < M && grid2[i + 1][j] == 1)
                  dfs(grid1, grid2, M, N, i + 1, j, check);
        if(j + 1 < N && grid2[i][j + 1] == 1)
                  dfs(grid1, grid2, M, N, i, j + 1, check);
        if(i - 1 >= 0 && grid2[i - 1][j] == 1)
                  dfs(grid1, grid2, M, N, i - 1, j, check);
        if(j - 1 >= 0 && grid2[i][j - 1] == 1)
                  dfs(grid1, grid2, M, N, i, j - 1, check);
        
        return;
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();
        int check = 1;
        int count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                check = 1;
                if(grid2[i][j] == 1)
                { 
                  dfs(grid1, grid2, m, n, i, j, check);
                  if(check == 1)
                      count++;
                }
            }
        }
        return count;
    }
};