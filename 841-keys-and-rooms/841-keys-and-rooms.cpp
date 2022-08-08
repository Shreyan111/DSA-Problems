class Solution {
public:
    void dfs(vector<vector<int>> &rooms, vector<bool> &visited, int ind, int n)
    {
        if(visited[ind] == true){
            return;
        }
        visited[ind] = true;
        
        for(auto i:rooms[ind])
        {
            dfs(rooms, visited, i, n);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);
        dfs(rooms, visited, 0, n);
        for(auto i:visited) 
        {
            if(i == false){
                return false;
            }
        }
        return true;
    }
};