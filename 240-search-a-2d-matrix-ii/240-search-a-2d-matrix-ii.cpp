class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();
        
        int row_index = 0;
        int column_index = column - 1;
        
        //binary search
        while(row_index < row && column_index >= 0){
            int ele = matrix[row_index][column_index];
            
            if(target == ele){
                return 1;
            }
            else if(ele < target){
                row_index++;
            }
            else{
                column_index--;
            }
        }
        return 0;
    }
};