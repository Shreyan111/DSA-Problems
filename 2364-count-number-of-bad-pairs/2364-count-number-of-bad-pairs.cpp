class Solution { 
public:
    long long countBadPairs(vector<int>& nums) {
        map<int,int> mp;
        long long k = 0;//number of good pairs
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int req = nums[i] - i;
            if(mp.count(req) > 0){
                k = k + mp[req];
            }
            mp[req]++;
        }
        return (long long)(((long long)n*((long long)n-1))/2*1ll) - k;
    }
};