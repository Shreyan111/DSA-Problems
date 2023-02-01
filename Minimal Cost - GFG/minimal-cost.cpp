//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int find(vector<int>& height, int index, int k, vector<int>& dp){
        if(index == 0) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        int cost = INT_MAX;
        int jumps;
        
        for(int j = 1; j <= k; j++){
            if(index - j >= 0){
                jumps = find(height, index - j, k, dp) + abs(height[index] - height[index - j]);
                cost = min(cost, jumps);
                dp[index] = cost;
            }
        }
        return cost;
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int> dp(n + 1, -1);
        return find(height, n - 1, k, dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends