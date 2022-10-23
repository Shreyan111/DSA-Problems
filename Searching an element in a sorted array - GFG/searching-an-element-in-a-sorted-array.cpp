//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends

class Solution{

    public:

    int searchInSorted(int arr[], int N, int K) 

    { 

        int l=0,e=N-1;

        while(l<=e)

        {

            int m = (l+e)/2;

            if(arr[m]==K){ return 1;}

            else if(arr[m]>K){ e=m-1;}

            else{ l=m+1;}

        }

        return -1;

    }

};


//{ Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 

// } Driver Code Ends