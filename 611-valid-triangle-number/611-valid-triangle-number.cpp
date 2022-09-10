class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        if(nums.size() < 3) return 0;
        
        sort(nums.begin(), nums.end());
        
        int ans = 0;
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(nums[i] == 0) continue;
            
            for(int j = i + 1; j < nums.size() - 1; j++)
            {
                int len = nums[i] + nums[j];
                
                int index1 = lower_bound(nums.begin(), nums.end(), len) - nums.begin();
                
                ans = ans + index1 - j - 1;
            }
        }
        return ans;
    }
};