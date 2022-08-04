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
            auto it = mp.lower_bound(nums[i][1]); //lower bound starts from 4 then, 3 and then 2 in example 2 and these lower bound are considered as key and accordingly the value is taken into consideration and changed with ans vector
            if(it != mp.end())
            {
                ans[i] = it -> second;
            }
        }
        return ans;
    }
};