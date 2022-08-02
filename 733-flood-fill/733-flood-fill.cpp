class Solution {
public:
    void dfs(int x, int y, vector<vector<int>>& image, int pc, int c){
        if(x < 0 || y < 0 || x >= image.size() || y >= image[0].size() || image[x][y] != pc)  
			return;
        
		image[x][y] = c;

        //color in 4 direction
		dfs(x - 1, y, image, pc, c);
		dfs(x, y - 1, image, pc, c);
		dfs(x, y + 1, image, pc, c);
		dfs(x + 1, y, image, pc, c);

		return;
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int pcolor = image[sr][sc];
        if(pcolor == color){
            return image;
        }
        dfs(sr, sc, image, pcolor, color);
        return image;
    }
};