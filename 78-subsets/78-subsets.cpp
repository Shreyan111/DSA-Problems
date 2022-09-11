class Solution {
    public:
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<int> temp;
            vector<vector<int>> res;
            recurseSubs(res, temp, nums, 0);
            return res;
        }

        static void recurseSubs(vector<vector<int>>& res, vector<int>& temp, vector<int>& nums, int j) {
            res.push_back(temp);
            for (int i = j; i < nums.size(); i++) {
                temp.push_back(nums[i]);
                recurseSubs(res, temp, nums, i + 1);
                temp.pop_back();
            }
            return;
        }
};