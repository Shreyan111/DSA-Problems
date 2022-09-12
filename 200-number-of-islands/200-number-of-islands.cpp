// class Solution {
// public:
//     void dfs(vector<vector<char>> &grid, int i, int j, int row, int col){
        
//         //boundary check
//         if(i < 0 || j < 0 || i >= row || j >= col){
//             return;
//         }
        
//         //if the grid is 0 then return it
//         if(grid[i][j] == '0'){
//             return;
//         }
        
// 		//make the grid to zero before moving to directions
//         grid[i][j] = '0';
        
//         //all directions
//         dfs(grid, i + 1, j, row, col);//bottom
//         dfs(grid, i, j + 1, row, col);//right
//         dfs(grid, i - 1, j, row, col);//top
//         dfs(grid, i ,j - 1, row, col);//left
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int row = grid.size();
//         int column = grid[0].size();
//         int count = 0;
//         for(int i = 0; i < row; i++){
//             for(int j = 0; j < column; j++){
//                 if(grid[i][j] == '1'){
//                     dfs(grid, i, j, row, column);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };




































class Solution {
public:
    void dfs(vector<vector<char>> &grid, int i, int j, int row, int col){
        
        //boundary check
        if(i < 0 || j < 0 || i >= row || j >= col || grid[i][j] == '0'){
            return;
        }
        
        grid[i][j] = '0';
        
        dfs(grid, i + 1, j, row, col);//bottom
        dfs(grid, i, j + 1, row, col);//right
        dfs(grid, i - 1, j, row, col);//top
        dfs(grid, i ,j - 1, row, col);//left
    }
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int column = grid[0].size();
        
        int count = 0;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                if(grid[i][j] == '1'){
                    dfs(grid, i, j, row, column);
                    count++;
                }
            }
        }
        return count;
    }
};