class Solution {
public:
    int maxProfit(vector<int>& a) {
        int profit = 0;
        
        int buy = 0, sell = 0;
        
        while (sell < a.size()){
            if (a[sell] - a[buy] > 0) 
                profit = max(profit, a[sell] - a[buy]);
            
            else 
                buy = sell;
            
            sell++;
        }
        return profit;
    }
};