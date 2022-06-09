// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0, j = 0, z = 0; 
        int res[n+m];
        while (i < n) {  
            res[z] = arr1[i]; 
            i += 1;  
            z += 1;  
        }  
        while (j < m) { 
            res[z] = arr2[j]; 
            j += 1;  
            z += 1;  
        } 
        
        sort(res, res+n+m);
        
        int answer = res[k-1];
        
        return answer;
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends