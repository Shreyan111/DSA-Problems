class Solution {
public:
    int sieve(int N)
    {
        int cnt = 0;
        bool prime[N];
        
        for(int i = 2 ; i < N ; i++)
            prime[i] = true;
        
        for(int i = 2 ; i * i < N ; i++)
        {
            if(prime[i])
                for(int j = i * i ; j < N ; j = j + i) // Good Logic thought
                    prime[j] = false;
        }
        
        for(int i = 2 ; i < N ; i++)
            if(prime[i])
                cnt++;
        
        return cnt;
}
    
    int countPrimes(int N)
    {
        if(N < 3)
            return 0;
        return sieve(N);
    }
};