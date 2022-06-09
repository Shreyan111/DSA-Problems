class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        vector<vector<int>> result(n, vector<int>(n));
        
        int xBeg=0,xEnd=n-1;
        int yBeg=0,yEnd=n-1;
        
        int cur=1;
        
        while(true){
            for(int i = yBeg; i <= yEnd; i++){ 
                result[xBeg][i] = cur++;
            }
            
            xBeg++;
            
            if(xBeg > xEnd) 
                break;
            
            for(int i = xBeg; i <= xEnd; i++) {
                result[i][yEnd] = cur++;
            }
            yEnd--;
            
            if(yEnd < yBeg) 
                break;
            
            for(int i = yEnd;i >= yBeg; i--){ 
                result[xEnd][i]=cur++;
            }
            
            xEnd--;
            
            if(xEnd < xBeg) 
                break;
            
            for(int i = xEnd; i>= xBeg; i--){    
                result[i][yBeg]=cur++;
            }
            
            yBeg++;
            
            if(yBeg > yEnd) 
                break;
        }
        
        return result; 
        
    }
};