class Solution 
{
    public:
    bool issafe(int i, int j, int R, int C)
    {
        if (i >= 0 && i < R && j >= 0 && j < C)
            return true;
        return false;
    }
    
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int R = grid.size();
        bool changed = false;
        int no = 2;
        
        while (true) {
            for (int i = 0; i < R; i++) {
                for (int j = 0; j < grid[i].size(); j++) {
                    if (grid[i][j] == no) {
                        if (issafe(i + 1, j, R, grid[i].size()) && grid[i + 1][j] == 1) {
                            grid[i + 1][j] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i, j + 1, R, grid[i].size()) && grid[i][j + 1] == 1) {
                            grid[i][j + 1] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i - 1, j, R, grid[i].size()) && grid[i - 1][j] == 1) {
                            grid[i - 1][j] = grid[i][j] + 1;
                            changed = true;
                        }
                        if (issafe(i, j - 1, R, grid[i].size()) && grid[i][j - 1] == 1) {
                            grid[i][j - 1] = grid[i][j] + 1;
                            changed = true;
                        }
                    }
                }
            }
            
        if (!changed)
            break;
        changed = false;
        no++;
    }
 
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1)
                return -1;
        }
    }
    return no - 2;
    }
};