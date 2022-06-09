// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void sort012(int a[], int n)
{
    int i = 0 ,  countzero = 0 , countone = 0 ,  counttwo = 0 ;  
    while ( i < n )  
    {  
        if ( a [ i ] == 0 )  
        {  
            countzero = countzero + 1 ;  
        }  
        else if ( a [ i ] == 1 )  
        {  
            countone = countone + 1 ;  
        }  
        else  
        {  
            counttwo = counttwo + 2 ;  
        }  
        i++ ;  
    } 
    
    for  ( i = 0 ; i < countzero ; i++ )  
    {  
        a [ i ] = 0 ;  
    }  
    for ( i = countzero ; i < countzero + countone ; i++ )  
    {  
        a [ i ] = 1 ;  
    }  
    for ( i = countzero + countone ; i < n ; i++ )  
    {  
        a [ i ] = 2 ;  
    }  
}

// { Driver Code Starts.

int main() {

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }

        sort012(arr, n);

        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends