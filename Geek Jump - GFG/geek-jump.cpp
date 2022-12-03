//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n, -1);
        dp[0] = 0;
        for(int ind = 1; ind < n; ind++){
            int jumpTwo = INT_MAX;
            int jumpOne= dp[ind - 1] + abs(height[ind] - height[ind-1]);
            if(ind > 1)
                jumpTwo = dp[ind - 2] + abs(height[ind] - height[ind-2]);
                
            dp[ind] = min(jumpOne, jumpTwo);
        }
        return dp[n - 1];
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends