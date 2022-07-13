// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string prefix = "";
        int j = 0;
        sort(arr, arr + N);
        string strs1 = arr[0];
        string strs2 = arr[N - 1];
        
        for(int i = 0; i < arr[0].size(); ++i){
            if(strs1[i] == strs2[j]){
                prefix += strs1[i]; 
            }
            else{
                break;
            }
            ++j;
        }
        
        if(prefix == ""){
            return "-1";
        }
    return prefix;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends