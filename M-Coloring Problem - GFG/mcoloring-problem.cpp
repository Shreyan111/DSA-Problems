//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool isSafe(int node, bool graph[101][101], int currcolor, vector<int>&color, int n){
       for(int k = 0; k < n; k++){
           // if its not the current node and,
            // if there is an edge between the ith node and current node i.e to check adjacent node
            // if the adjacent node is colored with the color we intend to color with.
           if(k != node and graph[k][node] != 0 and color[k] == currcolor){
               return false;
           }
       }
       return true;
   }
   bool solve(int node, bool graph[101][101], vector<int>&color, int m, int n){
       if(node == n){
           return true;
       }
       for(int i = 1; i <= m; i++){
           if(isSafe(node, graph, i, color, n)){
               color[node] = i;
               if(solve(node + 1, graph, color, m, n)){
                   return true;
               }
               color[node] = 0; //backtrack
           }
       }
       return false;
   }
   bool graphColoring(bool graph[101][101], int m, int n) {
       // your code here
       vector<int>color(n, 0);
       if(solve(0, graph, color, m, n)){
           return true;
       }
       return false;
   }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, e;
        cin >> n >> m >> e;
        int i;
        bool graph[101][101];
        for (i = 0; i < n; i++) {
            memset(graph[i], 0, sizeof(graph[i]));
        }
        for (i = 0; i < e; i++) {
            int a, b;
            cin >> a >> b;
            graph[a - 1][b - 1] = 1;
            graph[b - 1][a - 1] = 1;
        }
        Solution ob;
        cout << ob.graphColoring(graph, m, n) << endl;
    }
    return 0;
}

// } Driver Code Ends