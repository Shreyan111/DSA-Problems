// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

#include <boost/algorithm/string.hpp>
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int N= S.length();
        int i=0;
        string result;
        while(i<N){
            while(i<N && S[i]==' '){
                i++;
            }
            
            if(i>=N)break;
            
            int j= i+1;
            
            while(j<N && S[j]!='.'){
                j++;
            }
            string sub= S.substr(i, j-i);
            
            
            if(result.length()==0){
                result= sub;
            }
            else{
              result= sub + "." + result;
            }
            i= j+1;
            
        }
        return result;
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends