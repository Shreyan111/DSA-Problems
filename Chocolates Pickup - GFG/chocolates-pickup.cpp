//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int find(int row, int col1, int col2, int n, int m, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp){
        if(col1 < 0 || col1 >= m || col2 < 0 || col2 >= m) return -1e9;
        
        if(row == n - 1)
        {
            if(col1 == col2)
                return grid[row][col1];
            else 
                return (grid[row][col1] + grid[row][col2]);
        }
        
        if(dp[row][col1][col2] != -1) return dp[row][col1][col2];
        
        int dy[] = {-1, 0, 1};
        
        int maxi = INT_MIN;
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int ans;
                if(col1 == col2){
                    ans = grid[row][col1] + find(row + 1, col1 + dy[i], col2 + dy[j], n, m, grid, dp); 
                }
                else{
                    ans = grid[row][col1] + grid[row][col2] + find(row + 1, col1 + dy[i], col2 + dy[j], n, m, grid, dp);
                }
                maxi = max(maxi, ans);
            }
        }
        return dp[row][col1][col2] = maxi;
    }
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
        return find(0, 0, m - 1, n, m, grid, dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends