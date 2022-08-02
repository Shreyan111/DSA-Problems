class Solution {
public:
    //calculating the numbers which are less than mid
    int solve(vector<vector<int>>& matrix, int mid){
        int count = 0;
        int n = matrix.size();
        int i = n - 1;
        int j = 0;
        while(i >= 0 && j < n){
            if(matrix[i][j] > mid){
                i--;
            }
            else{
                count = count + i + 1; //important
                j++;
            }
        }
        return count;
    }
    
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int l = matrix[0][0];
        int h = matrix[n - 1][n - 1];
        
        while(l < h){
            int mid = l + (h - l)/2;
            int position = solve(matrix, mid); //calculating how many numbers are less than mid
            if(position < k){
                l = mid + 1;
            }
            else{
                h = mid;
            }
        }
        return l;
    }
};