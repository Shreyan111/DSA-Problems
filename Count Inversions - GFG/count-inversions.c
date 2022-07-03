// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdlib.h>


 // } Driver Code Ends
//User function Template for C

// Function to count inversions in the array.
long long int merge(long long arr[], long long l, long long mid, long long r){
       long long int i = l;
       long long int j = mid+1;
       long long int k = l;
       long long int B[r+1]; //temp array
       long long int count = 0;
        
        while(i <= mid && j <= r){
            if(arr[i] > arr[j]){
                count = count + mid-i+1; //extra line added in merge sort
                B[k++] = arr[j++];
                
            }
            else B[k++] = arr[i++];
        }
        
        while(i <= mid){
            B[k++] = arr[i++];
        }
        while(j <= r){
            B[k++] = arr[j++];
        }
        
        for(int k = l; k <= r; k++){
            arr[k] = B[k];
        }
        return count;
    }
    long long int merge_sort(long long a[], long long si, long long ei){
        if(si >= ei){
            return 0;
        }
        long long mid = (si+ei)/2;
        long long int x = merge_sort(a, si, mid);
        long long int y = merge_sort(a, mid+1, ei);
        long long int z = merge(a, si, mid, ei);
        return x+y+z;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return merge_sort(arr, 0, N-1);
    }



// { Driver Code Starts.

int main() {
    
    long long T;
    scanf("%ld", &T);
    
    while(T--){
        long long N;
        scanf("%ld", &N);
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            scanf("%ld", &A[i]);
        }
        
        printf("%ld\n", inversionCount(A,N) );
    }
    
    return 0;
}
  // } Driver Code Ends