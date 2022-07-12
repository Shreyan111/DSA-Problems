// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
  int atoi(string str) {
        
        int i;
        if(str[0] == '-')
             i=1;
        else i=0;
        
       
        for(i;i<str.length();i++)
        {
            if(str[i]-'0'<0 || str[i]-'0'>9)
                return -1;
        }
    
         if(str[0] == '-')
             i=1;
        else i=0;
        
        int res=0;
        
        for(i;i<str.length();i++)
        {
            res = (res*10 + str[i]-'0');
        }
        
        if(str[0] =='-')
            res = -res;
        return res;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends