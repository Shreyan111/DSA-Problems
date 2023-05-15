//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
public:


    int bs(int i,int l,int h, vector<int>&arr){
        int low=l;
        int high=h;
        
        int ans=INT_MIN;
        while(low<=high){
            int mid=low+(high-low)/2;
            
            if(arr[mid]==1){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
int rowWithMax1s(vector<vector<int>>arr, int n, int m) {
   int maxi=0;
   int row=-1;
   for(int i=0;i<n;i++){
       int ind=bs(i,0,m-1,arr[i]);
       if(maxi<m-ind){
           maxi=m-ind;
           row=i;
       }
   }
   return row;
}


};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends