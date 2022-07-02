class Solution {
public:
    bool isSafe(vector<string>&board ,int n ,int row , int col){
        int duprow = row ;
        int dupcol = col ; 
        
        while(row >= 0 && col >= 0){
            if(board[row][col] == 'Q'){
                return false ;
            }
            row--;
            col--;
        }
        
        row = duprow; 
        col = dupcol;
        
        while(row < n && col >= 0 ){
            if(board[row][col] == 'Q'){
                return false ; 
            }
            
            row++; 
            col--;
        }
        
        row = duprow ; 
        col = dupcol ; 
        
        while(col >= 0){
            if(board[row][col] == 'Q'){
                return false ; 
            }
            col--;
        }
        return true ; 
    }
    
    void find(vector<string>&board , vector<vector<string>>&ans , int n , int col){
        if(col == n){
            ans.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++){
            if(isSafe(board , n ,row ,col)){
                board[row][col] ='Q';
                find(board , ans , n , col + 1);
                board[row][col] ='.'; //backtracking
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans ; 
        vector<string> board(n);
        string s(n ,'.');
        for(int i = 0;i<n;i++){
            board[i] = s;
        }
        find(board , ans , n , 0);
        return ans ; 
    }
};