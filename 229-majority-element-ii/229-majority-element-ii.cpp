class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        vector<int>ans;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }
        
        for (auto pair: map)
        {
            if (pair.second > n/3) {
                ans.push_back(pair.first);
            }
        }
        
        return ans;
    }
};