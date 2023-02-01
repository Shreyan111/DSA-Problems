//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int index, vector<int>& height, vector<int>& dp){
        
        if(index == 0) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        int jump_two = INT_MAX;
        int jump_one = f(index - 1, height, dp) + abs(height[index] - height[index - 1]);
        
        if(index > 1){
            jump_two = f(index - 2, height, dp) + abs(height[index] - height[index - 2]);
        }
        
        return dp[index] = min(jump_one, jump_two);
    }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int> dp(n + 1, -1);
        return f(n - 1, height, dp);
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