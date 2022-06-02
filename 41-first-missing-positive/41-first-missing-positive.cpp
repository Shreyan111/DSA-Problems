class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<bool> vect(n, false);
        
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0 && nums[i] <= n)
                vect[nums[i]] = true;
        }
        
        for (int i = 1; i <= n; i++)
            if (!vect[i])
                return i;

	return n + 1;
        
    }
};