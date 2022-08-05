class Solution {
public:
    void dfs(int i, int j, map<pair<int,int>, bool>& canReach, vector<vector<int>>& heights, int parentHeight)
    {
        //height of neighbouring cell should be smaller so that water can flow
        if(i < 0 || j < 0 || i >= heights.size() || j >= heights[0].size() || canReach[{i,j}] || heights[i][j] < parentHeight) {
            return ;
        }
        canReach[{i,j}] = true;
        
        dfs(i + 1, j, canReach, heights, heights[i][j]);
        dfs(i - 1, j, canReach, heights, heights[i][j]);
        dfs(i, j + 1, canReach, heights, heights[i][j]);
        dfs(i, j - 1, canReach, heights, heights[i][j]);
        
        return;
        
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>> ans;
        int n = heights.size();
        int m = heights[0].size();
        if(n==0 || m==0){
            return ans;
        }
        
        //map is used for storing the true values for pacific and atlantic ocean each
        map<pair<int, int>, bool> pacific;
        map<pair<int, int>, bool> atlantic;
        for(int j = 0; j < m; j++) {
            dfs(0, j, pacific , heights, -1); //top row
            dfs(n - 1, j, atlantic, heights, -1); //bottom row
        }
        
        for(int i = 0; i < n; i++) {
            dfs(i, 0, pacific, heights, -1); //first column
            dfs(i, m - 1, atlantic, heights, -1); //last column
        }
        
        //if both for pacific and atlantic the bool value is true then only push the index
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(pacific[{i,j}] && atlantic[{i,j}]){
                    vector<int> index;
                    index.push_back(i);
                    index.push_back(j);
                    ans.push_back(index);
                }
            }
        }
        return ans;
    }
};