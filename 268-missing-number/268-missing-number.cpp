class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n;
        int sum;
        int vec_sum;
        n = nums.size();
        sum = n*(n+1)/2;
        vec_sum = accumulate(nums.begin(), nums.end(), 0);
        
        int ans;
        ans = sum - vec_sum;
        
        return ans;
    }
};