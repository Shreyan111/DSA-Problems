class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int res = 0;
        vector<vector<int>> vis(board.size(), vector<int>(board[0].size(),0));
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == 'X' && vis[i][j] == 0){
                    res++;
                    find(board, vis, i, j);
                }
            }
        }
        return res;
    }
    
    void find(vector<vector<char>>& board, vector<vector<int>>& vis, int i, int j)
    {
        //edge case
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || vis[i][j] == 1 || board[i][j] != 'X'){
            return;
        }
        
        vis[i][j] = 1;
        find(board, vis, i-1, j);
        find(board, vis, i+1, j);
        find(board, vis, i, j-1);
        find(board, vis, i, j+1);
    }
};