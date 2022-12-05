//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int ind, vector<int>& height, vector<int>& dp, int k){
    if(ind == 0) return 0;
    
    int steps = INT_MAX;
    int jump;
    
    if(dp[ind] != -1) return dp[ind];
        
    for(int j = 1; j <= k; j++){
        if(ind - j >= 0){
            jump = f(ind - j, height, dp, k)+ abs(height[ind] - height[ind - j]);
            steps = min(jump, steps);
            dp[ind] = steps;
        }
    }
    return dp[ind];
    }
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int> dp(n + 1, -1);
        return f(n - 1, height, dp, k);
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