// { Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

 // } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        // bool found = false;
    
        // for (int i = 0; i < n - 2; i++) {
        //     for (int j = i + 1; j < n - 1; j++) {
        //         for (int k = j + 1; k < n; k++) {
        //             if (arr[i] + arr[j] + arr[k] == 0) {
        //                 found = true;
        //             }
        //         }
        //     }
        // }
        
        // return found;
        
/*        bool found = false;
 
        for (int i=0; i<n-1; i++)
        {
            unordered_set<int> s;
            for (int j=i+1; j<n; j++)
            {
                int x = -(arr[i] + arr[j]);
                if (s.find(x) != s.end())
                {
                    found = true;
                }
                else
                    s.insert(arr[j]);
            }
        }
        
        return found;*/
        
        vector<int> v;
        for(int i=0;i<n;i++)
        v.push_back(arr[i]);
    
        sort(v.begin(), v.end());
    
        for(int i=0;i<n-2;i++){
            int p=i+1;
            int q=n-1;
            while(p<q){
                if(v[p] +v[q] +v[i]==0)
                    return true;
                else if(v[p] +v[q] +v[i]<0)
                    p++;
                else
                    q--;
            }
        }
    return false;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}  // } Driver Code Ends