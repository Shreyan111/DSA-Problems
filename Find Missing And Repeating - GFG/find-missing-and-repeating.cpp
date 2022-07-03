// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int *res = new int[2]; //pointer used since pointer is asked
        
        int count[n+1]={0};
        
        for(int i = 0; i < n; i++)
        {
            count[arr[i]]++;
        }
        for(int i = 1; i < n+1; i++)
        {
            if(count[i] == 0)
                res[1] = i;
            
            else if(count[i] > 1)
                res[0] = i;
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends