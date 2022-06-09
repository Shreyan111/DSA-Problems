// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
    //     vector<int> res_arr;
        
    //     for(int i = 0; i < n; i++){
    //         int num = arr[i];
            
    //         for(int j = i + 1; j < n; j++){
    //             if (std::count(res_arr.begin(), res_arr.end(), num)){
    //                 break;
    //             }
    //             else{
    //                 if(arr[j] == num){
    //                     res_arr.push_back(num);
    //                     break;
    //                 }    
    //             }
    //         }
    //     }
        
        
    //     sort(res_arr.begin(), res_arr.end());
        
    //     if(res_arr.size() == 0) {
    //         res_arr.push_back(-1);
    //     }
       
    //   return res_arr;
    
    int *a = new int[n];
    for(int i=0; i<n; i++){
        a[i]=0;
    }
       
    for(int i=0; i<n; i++)
    {
        a[arr[i]]++;
    }
       
    vector<int> ans;
    
    for(int i=0; i<n; i++){
        if(a[i]>1)
        {
            ans.push_back(i);
        }
    }
    
    if(ans.size()==0) {
        ans.push_back(-1);
    }
    
    return ans;
        
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends