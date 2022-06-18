// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here  
    long long l=1, r=x, mid;
    while(l <= r){
        mid = l + (r-l)/2;
        long long val = mid*mid;
        if(val==x)
            return mid;
        if(val<x)
            l=mid+1;
        else
            r=mid-1;
        }
    return l-1;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends