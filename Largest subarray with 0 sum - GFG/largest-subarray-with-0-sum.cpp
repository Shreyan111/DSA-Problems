// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {  
        int sum = 0;
        int ans = INT_MIN;
        
        vector<int>a;
        for(int i = 0; i < n; i++)
        {
            sum = sum + A[i];
            a.push_back(sum);
            if(sum == 0)
            {
                ans = max(ans, i+1);
            }
        }
     
        unordered_map<int,vector<int>>m;
        for(int i = 0; i < n; i++)
        {
            m[a[i]].push_back(i);
        }
     
        for(auto it:m)
        {
            int l = it.second.size()-1;
            int start = it.second[0];
            int end = it.second[l];
            int dif = end-start;
            ans = max(ans,dif);
        }
    return ans;
   }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends