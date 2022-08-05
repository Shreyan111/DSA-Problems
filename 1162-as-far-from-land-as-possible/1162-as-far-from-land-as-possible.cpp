// class Solution {
// public:
//     void dfs(vector<vector<int>> &grid, int i, int j, int m, int n, int dist){
//         if(i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == 1 || (grid[i][j] != 0 && dist >= grid[i][j] )){
//             return;
//         }
        
//         grid[i][j] = dist;
        
//         dfs(grid, i + 1, j, m, n, dist + 1);
//         dfs(grid, i - 1, j, m, n, dist + 1);
//         dfs(grid, i, j + 1, m, n, dist + 1);
//         dfs(grid, i, j - 1, m, n, dist + 1);
        
//         return;
//     }
    
//     int maxDistance(vector<vector<int>>& grid) {
//         int row = grid.size();
//         int col = grid[0].size();
        
//         for(int i = 0; i < row; i++)
//         {
//             for(int j = 0; j < col; j++)
//             {
//                 if(grid[i][j] == 1)
//                 {
//                     int dist = 1;
//                     grid[i][j] = 0; // makes it as visited
//                     dfs(grid, i, j, row, col, dist);
//                 }
//             }
//         }
        
//         int maxi = -1;
        
//         for(int i = 0; i < row; i++)
//         {
//             for(int j = 0; j < col; j++)
//             {
//                 if(grid[i][j] > 1)
//                     maxi = max(maxi , grid[i][j] - 1);
//             }
//         }
//          return maxi;
//     }
// };


class Solution {
public:
    queue<pair<int,int>> q;
    int level = 0;   //max distance  
    
    void bfs(int i, int j, int n, vector<vector<int>>& grid, vector<vector<int>>& visit)
    {
        if( i < 0 || j < 0 || i >= n || j >= n || visit[i][j] != -1)
            return;
            
        q.push(make_pair(i,j));
        visit[i][j] = 1;
    }
    
    int maxDistance(vector<vector<int>>& grid) {
        
        int n = grid.size();

        vector<vector<int>> visit(n, vector<int> (n, -1));
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(grid[i][j] == 1)  // push the coordinates of all 1s into queue
                {
                    q.push(make_pair(i, j)); //make_pair is a function in cpp which makes pairs
                    visit[i][j] = 1;
                }
                    
            }
        }
        
        if(q.size() == n * n || q.size() == 0 ) //if the grid contains all 1's or 0's
            return -1;
        
        while(!q.empty())
        {
            int size = q.size();
            
            while(size--)
            {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                
                bfs(i - 1, j, n, grid, visit);
                bfs(i + 1, j, n, grid, visit);
                bfs(i, j - 1, n, grid, visit);
                bfs(i, j + 1, n, grid, visit);
            }
            
            level++;
        }
        return level - 1; // -1 is done to eliminate the count of that node which is at max distance
    }
};