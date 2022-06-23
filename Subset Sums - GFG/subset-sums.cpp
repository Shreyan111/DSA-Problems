// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
vector<int> subsetSums(vector<int> arr, int N)
   {
       vector<int> a;
       vector<int> b;
       if(N==0)
       {
           a.push_back(0);
           return a;
       }
       
       b = subsetSums(arr, N-1);
       int size = b.size();
       for(int i = 0; i < size; i++)
       {
           b.push_back(b[i] + arr[N-1]);
       }
       return b;
   }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends