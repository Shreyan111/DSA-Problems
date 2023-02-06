//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool find(int index, vector<int>& arr, int target, vector<vector<int>>& dp){
        if(target == 0) return true;
        
        if(index == 0) return arr[0] == target;
        
        if(dp[index][target] != -1) return dp[index][target];
        
        bool notTaken = find(index - 1, arr, target, dp);
        bool taken = false;
        
        if(arr[index] <= target){
            taken = find(index - 1, arr, target - arr[index], dp);
        }
        
        return dp[index][target] = notTaken || taken;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        return find(n - 1, arr, sum, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends