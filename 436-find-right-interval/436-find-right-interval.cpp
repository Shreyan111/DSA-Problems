class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& nums)
    {
        map<int ,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i][0]] = i;
        }
        
        vector<int> ans(nums.size(), -1);
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = mp.lower_bound(nums[i][1]);
            if(it != mp.end())
            {
                ans[i] = it -> second;
            }
        }
        return ans;
    }
};