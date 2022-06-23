class Solution {
public:
    void subsetsII(vector<vector<int>>& ans, vector<int>& ds, vector<int>& nums, int i) {
        if (i == nums.size()) {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        subsetsII(ans, ds, nums, i + 1);
        ds.pop_back();
        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        subsetsII(ans, ds, nums, i + 1);
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        subsetsII(ans, ds, nums, 0);
        return ans;
    }
};