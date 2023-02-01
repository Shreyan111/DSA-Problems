//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int f(int index, int last_task, vector<vector<int>> &points, vector<vector<int>> &dp){
        if(index == 0){
            int maxi = 0;
            
            for(int task = 0; task < 3; task++){
                if(task != last_task){
                    maxi = max(maxi, points[0][task]);
                }
            }
            return maxi;
        }
        
        if(dp[index][last_task] != -1) return dp[index][last_task];
        
        int maxi = 0;
        
        for(int task = 0; task < 3; task++){
            if(task != last_task){
                int point = points[index][task] + f(index - 1, task, points, dp);
                maxi = max(maxi, point);
            }
        }
        
        return dp[index][last_task] = maxi;
    }
    
    int maximumPoints(vector<vector<int>>& points, int n) {
        // Code here
        vector<vector<int>> dp(n, vector<int>(4, -1));
        return f(n - 1, 3, points, dp);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends