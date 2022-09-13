// class Solution {
// public:
//      int count=0;
//      void helper(vector<vector<int>>& grid, vector<vector<bool>>& visited, int r, int c) {
//         if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || visited[r][c] == true || grid[r][c] == 0){
//             return;
//         }
//         visited[r][c] = true; 
//         count++;
//         helper(grid, visited, r - 1, c);
//         helper(grid, visited, r, c - 1);
//         helper(grid, visited, r + 1, c);
//         helper(grid, visited, r, c + 1);
//     }
    
    
//     int maxAreaOfIsland(vector<vector<int>>& grid) {
//         int row = grid.size();
//         int col = grid[0].size();
        
//         vector<vector<bool>>visited(row, vector<bool>(col, false));
//         int len = 0; //max area
        
//         for(int i = 0; i < row; i++){
//             for(int j = 0; j < col; j++){
//                 count = 0;
//                 if(visited[i][j] == false && grid[i][j] == 1) {
//                     helper(grid, visited, i, j );
//                     len = max(count, len);
//                 }
//                 else {
//                     visited[i][j] = true;
//                 }
//             }
//         }
//         return len;
//     }
// };





































class Solution {
public:
    int count; //declared globally so updates values globally in it
     void helper(vector<vector<int>>& grid, vector<vector<bool>>& visited, int r, int c) {
         if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || visited[r][c] == true || grid[r][c] == 0){
            return;
        }
        visited[r][c] = true; 
        count++;
         
        helper(grid, visited, r - 1, c);
        helper(grid, visited, r, c - 1);
        helper(grid, visited, r + 1, c);
        helper(grid, visited, r, c + 1);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<bool>>visited(row, vector<bool>(col, false));
        int ans;
        
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                count = 0;
                if(visited[i][j] == false && grid[i][j] == 1){
                    helper(grid, visited, i, j);
                    ans = max(ans, count);
                }
                else{
                    visited[i][j] = true;
                }
            }
        }
        return ans;
    }
};

