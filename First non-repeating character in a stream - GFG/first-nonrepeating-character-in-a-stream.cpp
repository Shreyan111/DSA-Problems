// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
	string FirstNonRepeating(string A){
     // Code here
     map<char,int> m;
     vector<char> v;
     int f = 0, k = 0;
     char ch, pre;
     for(int i = 0; i < A.size(); i++){
         if(m.count(A[i]) > 0){
             m[A[i]] = 0;
             if(find(v.begin(), v.end(), A[i]) != v.end()){
                 v.erase(find(v.begin(), v.end(), A[i]));
             }
         }
         else{
             m[A[i]] = 1;
             v.push_back(A[i]);
         }
         if(v.size()==0){
             A[i] = '#';
         }
         else{
             A[i] = v[0];
         }
     }
     return A;
    }  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends