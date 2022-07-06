// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	public:
    long long countTriplets(long long arr[], int n, long long sum)
    {
    // Your code goes here
        long long ans = 0;
        sort(arr, arr+n);
    
        for(int i = 0; i < n-2; i++)
        {
            if(arr[i]+arr[i+1]+arr[i+2] < sum)
            {
                int start = i + 1;
                int end = n - 1;
            
                while(start < end)
                {
                    if(arr[end] + arr[start] < sum - arr[i])
                    {
                        ans = ans + (end-start);
                        start++;
                    }
                    else 
                    end--;
                }
            }
            else 
            break;
    }
    return ans;
}
		 

};

// { Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends