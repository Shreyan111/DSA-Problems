class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        //match the first row and 0th row so that's why started from i = 1
        for(int i = 1; i < matrix.size(); i++){
            for(int j = 1; j < matrix[i].size(); j++){
                if(matrix[i][j] != matrix[i-1][j-1]){
                    return false;
                }
            }
        }
        return true;
    }
};