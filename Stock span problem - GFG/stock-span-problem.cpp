// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
   {
      // Your code here
      stack<pair<int,int>>s;
      vector<int>ans(n);
      for(int i = 0; i < n; i++){
          if(s.size() == 0){
              ans[i] = 1;
              s.push({price[i],1});
          }
         else  if(price[i] < s.top().first){
              ans[i] = 1;
              s.push({price[i],1});
          }
          else{
          int cnt=0;
          while(s.size()>0 && s.top().first <= price[i]){
              cnt = cnt + s.top().second;
              s.pop();
          }
           ans[i] = cnt+1;
           s.push({price[i],ans[i]});
          }
      }
      return ans;
   }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends