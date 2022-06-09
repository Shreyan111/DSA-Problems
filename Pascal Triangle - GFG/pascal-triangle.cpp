// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
// #define ll long long
class Solution{
public:
    vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<ll> crow;
        
        crow.push_back(1);
        
        if(n == 1){
            return crow;
        }
        
        vector<ll>prow = nthRowOfPascalTriangle(n - 1);
 
        for(int i = 1; i < prow.size(); i++)
        {
            int curr = (prow[i - 1] + prow[i])%1000000007;
            crow.push_back(curr);
        }
        crow.push_back(1);
     
    // Return the row
    return crow;
    }
};


// { Driver Code Starts.


void printAns(vector<ll> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}
  // } Driver Code Ends