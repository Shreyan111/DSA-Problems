class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>()); //sort in descending order
        return nums[k - 1];
    }
};