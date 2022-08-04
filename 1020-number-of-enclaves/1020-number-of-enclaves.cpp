class Solution {
public:
    void helper(int i, int j,vector<vector<int>>& grid) {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1){
            return;
        }
        
        grid[i][j] = 2;
        helper(i, j + 1, grid);
        helper(i + 1, j, grid);
        helper(i, j - 1, grid);
        helper(i - 1, j, grid);
        
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        
        //traversing the rows of the first and last column and making all 1's as 2
        for(int i = 0; i < row; i++){
            if(grid[i][0] == 1){
                helper(i, 0, grid);
            }
            if(grid[i][col - 1] == 1){
                helper(i, col - 1, grid);
            }
        } 
        
        //traversing the columns of the first and last row and making all 1's as 2
        for(int i = 0; i < col; i++){
            if(grid[0][i] == 1){
                helper(0, i, grid);
            }
            if(grid[row - 1][i] == 1){
                helper(row - 1, i, grid);
            }
        }
        int count = 0;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
               if(grid[i][j] == 1){
                   count++;
               }
            }
        }
        
        return count;
    }
};