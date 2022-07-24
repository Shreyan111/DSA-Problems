// class Solution {
// public:
//     vector<int> corpFlightBookings(vector<vector<int>>& book, int n) {
        
//         Time Complexity : o(n * n)
//         vector<int> ans(n, 0);
//         for(auto it:book){
//            for(int j = it[0]; j <= it[1]; j++){
//                ans[j - 1] = ans[j - 1] + it[2];
//            }
//         }
//         return ans;
        
        
//     }
// };

class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& book, int n) {
//         Time Complexity : o(n)
        
        vector<int> ans(n + 2, 0);
        
        for(auto it:book){
             ans[it[0]] = ans[it[0]] + it[2];
             ans[it[1]+1] -= it[2];
        }
        
        for(int i = 1; i <= n; i++){
            
            ans[i] = ans[i] + ans[i-1];
        }
        
        return {ans.begin() + 1, ans.end() - 1};
    }
};