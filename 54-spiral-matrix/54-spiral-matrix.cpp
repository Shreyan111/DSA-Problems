class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        
        vector<int>ans;
        
        int n=matrix[0].size();
        
        int rowstart = 0;
        int rowend = m;
        int colstart = 0;
        int colend = n;
        
        int k;
        
        while(rowstart < rowend && colstart < colend)
        {
            for(k = colstart; k < colend; k++)
                ans.push_back(matrix[rowstart][k]);
            
            rowstart++;
            
            for(k = rowstart; k < rowend; k++)
                ans.push_back(matrix[k][colend-1]);
            
            colend--;
            
            if(rowstart < rowend)
            {
                for(k = colend-1; k >= colstart; k--)
                    ans.push_back(matrix[rowend-1][k]);
                
                rowend--;
            }
            
            if(colstart < colend)
            {
                for(k = rowend-1; k >= rowstart; k--)
                    ans.push_back(matrix[k][colstart]);
                
                colstart++;
            }
            
        }
        return ans;       
    }
};