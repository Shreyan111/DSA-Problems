class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> crow;
        
        crow.push_back(1);
        
        if(rowIndex == 0){
            return crow;
        }
        
        vector<int>prow = getRow(rowIndex - 1);
 
        for(int i = 1; i < prow.size(); i++)
        {
            int curr = prow[i - 1] + prow[i];
            crow.push_back(curr);
        }
        crow.push_back(1);
     
    // Return the row
    return crow;
    }
};