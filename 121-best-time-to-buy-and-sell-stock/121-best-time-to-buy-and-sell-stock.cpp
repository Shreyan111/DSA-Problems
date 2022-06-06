class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int n = prices.size();
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 ans = max(ans, prices[j] - prices[i]);
//             }
//         }
        
//         return ans;
        
        
        
        int ans = 0;
        int mi = INT_MAX;
        
        for (auto ele : prices)
        {
            ans = max(ans, ele - mi);
            
            mi = min(mi, ele);
        }
        
        return ans;
        
    }
};