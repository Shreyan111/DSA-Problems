class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        
        for(auto i = 0; i < nums.size(); i++){
            for(auto j = i + 1; j < nums.size(); j++){
                if( nums[i] + nums[j] == target){
                     ans.push_back(i);
                     ans.push_back(j);
                }
            }
        }
        return ans;
    }
};