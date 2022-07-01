// class Solution {
// public:
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         do 
//         {
//             ans.push_back(nums);
//         }
//         while(next_permutation(nums.begin(),nums.end()));
        
//         return ans;
//     }
// };


class Solution {
public:
    void permutation(vector<int> &nums, int index, vector<vector<int>>&ans)
    {
        if(index >= nums.size())
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            permutation(nums, index + 1, ans);
            swap(nums[index], nums[i]); //backtrack
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutation(nums, 0, ans);
        return ans;
    }
};