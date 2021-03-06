class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> map;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }
        
        for (auto pair: map)
        {
            if (pair.second > n/2) {
                return pair.first;
            }
        }
        
        return 0;
    }
};