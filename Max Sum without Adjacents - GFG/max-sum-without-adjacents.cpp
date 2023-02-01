//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int find(int *arr, int index, vector<int>& dp){
        if(index == 0) return arr[index];
        if(index < 0) return 0;
        
        if(dp[index] != -1) return dp[index];
        
        int pick = arr[index] + find(arr, index - 2, dp);
        int notPick = find(arr, index - 1, dp);
        
        return dp[index] = max(pick, notPick);
    }
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n + 1, -1);
	    return find(arr, n - 1, dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends