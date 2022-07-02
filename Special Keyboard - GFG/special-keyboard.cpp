// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    // long long int optimalKeys(int N){
    //     // The optimal string length is N when N is smaller than 7
    //     if (N <= 6){
    //         return N;
    //     }
        
    //     // Initialize result
    //     int max = 0;
 
    //     // TRY ALL POSSIBLE BREAK-POINTS
    //     // For any keystroke N, we need to loop from N-3 keystrokes
    //     // back to 1 keystroke to find a breakpoint 'b' after which we
    //     // will have Ctrl-A, Ctrl-C and then only Ctrl-V all the way.
    //     int b;
        
    //     for (b = N - 3; b >= 1; b--) {
    //         int curr = (N - b - 1) * optimalKeys(b); //formula
    //         if (curr > max)
    //             max = curr;
    //     }
    //     return max;
    // }
    
    long long int optimalKeys(int N){
        vector<long long int> dp(N+1);
        for(int i = 1; i <= N; i++){
            dp[i] = i;
            for(int x = 1; x <= i-3; x++){//leaving 3 positions for key2, key3, key4
                dp[i] = max(dp[i], 1LL*dp[x]*(i-2-x+1));
            }
        }
        return dp[N];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.optimalKeys(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends