// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    string rremove(string s){
       string ans = "";
       int i = 0,j = 0;
       while(i < s.size()){
           j = i+1;
           while(j < s.size() && s[i] == s[j]){
               j++;
           }
           if(i+1 == j){
               ans.push_back(s[i]);
               i++;
           }
           else{
               i = j;
           }
       }
    if(s != ans){
          return rremove(ans);
      }
       return ans;
                   
   }
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.rremove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends