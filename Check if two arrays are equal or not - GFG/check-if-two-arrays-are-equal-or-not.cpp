// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        // for (auto i = A.begin(); i != A.end(); ++i){
        //     sort(A.begin(), A.end());
        // }
            
        // for (auto i = B.begin(); i != B.end(); ++i){
        //     sort(B.begin(), B.end());
        // }
        
        // if (A == B)
        // {
        //     return 1;
        // }
        // else{
        //     return 0;
        // }
        
        unordered_map<int, int> mp;
        for (int i = 0; i < N; i++)
            mp[A[i]]++;
 
        for (int i = 0; i < N; i++) {
        // If there is an element in arr2[], but
        // not in arr1[]
        if (mp.find(B[i]) == mp.end())
            return 0;
 
        // If an element of arr2[] appears more
        // times than it appears in arr1[]
        if (mp[B[i]] == 0)
            return 0;
 
        mp[B[i]]--;
    }
    return 1;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends