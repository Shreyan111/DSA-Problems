//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int mod = 1e9+7;
	int f(int ind, int target, int arr[], vector<vector<long>> &dp){
	    
	    if(ind == 0)
         {
            if(target == 0 && arr[0] == 0) return 2; // 2 subsets are possible which includes and does not includes 0 which is present at the beginning of the array
            if(target == 0 || target == arr[0]) return 1;
            return 0;
        }
	    
	   if(dp[ind][target] != -1) return dp[ind][target] % mod;
	    
	    int notTaken = f(ind - 1, target, arr, dp) % mod;
	    int taken = 0;
	    
	    if(arr[ind] <= target){
	        taken = f(ind - 1, target - arr[ind], arr, dp) % mod;
	    }
	    
	    return dp[ind][target] = (taken + notTaken) % mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<long>> dp(n, vector<long>(sum + 1, -1));
        return f(n - 1, sum, arr, dp) % mod;
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends