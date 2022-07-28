// In this code what I did is instead of finding the 'O's which can be converted into 'X' , I find the 'O' which can not be converted to 'X' by just applying dfs traversal on the boundary of the matrix and for temporarily mark all that type of 'O' to '$' and in the end mark all the '$' to again 'O' and convert all remaining 'O' to 'X'.

class Solution {
public:
    //we check the 'O' symbol in the border and convert it to '$' and using dfs check the adjacent of the 'O' symbol and also implement dfs recursively to prevent that adjecent 'O' from flipping
    void dfs(int i, int j, int m, int n, vector<vector<char>>&board, vector<vector<int>>&vis){
        vis[i][j] = 1;
        board[i][j] = '$';
        vector<pair<int,int>>temp = {{0,1},{0,-1},{1,0},{-1,0}}; //for adjacent nodes
        for(auto it:temp){
            int s1 = i + it.first;
            int s2 = j + it.second;
            if(s1 >= 0 && s1 < m && s2 >= 0 && s2 < n){
                if(board[s1][s2] == 'O'&& !vis[s1][s2]){
                    dfs(s1, s2, m, n, board, vis);
                }
            }
        }
    }
    
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();        
        
        //in case of 1 and 2 the O will be in border so it will not flip
        if(m > 2 && n > 2){
            vector<vector<int>> vis(m, vector<int> (n,0));
            
            // Traversing first row and last row
            for(int i = 0; i < n; i++){
                if(board[0][i] == 'O'){
                    if(!vis[0][i]){
                        dfs(0, i, m, n, board, vis);
                    }
                }
                if(board[m-1][i] == 'O'){
                    if(!vis[m-1][i]){
                        dfs(m-1, i, m, n, board, vis);
                    }
                }
            }
            
            // Traversing first column and last column
            for(int i = 0; i < m; i++){
                if(board[i][0] == 'O'){
                    if(!vis[i][0]){
                        dfs(i, 0, m, n, board, vis);
                    }
                }
                if(board[i][n-1] == 'O'){
                    if(!vis[i][n-1]){
                        dfs(i, n-1, m, n, board, vis);
                    }
                }
            }
            
            // remark all O to X and after that all $ to O 
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(board[i][j] == 'O'){
                        board[i][j] = 'X';
                    }
                    if(board[i][j] == '$'){
                        board[i][j] = 'O';
                    }
                }
            }
        }
    }
};