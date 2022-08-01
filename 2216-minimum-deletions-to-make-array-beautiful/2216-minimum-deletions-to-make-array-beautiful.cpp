class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n = nums.size();
        int deletions = 0;
        // i = i + 2 as i is for i % 2 == 0
        for(int i = 0; i + deletions + 1 < n; i = i + 2){
            while(i + deletions + 1 < n and nums[i + deletions] == nums[i + deletions + 1])
                deletions++;
        }
        int len = n - deletions;
        if(len % 2 == 0){
            return deletions;
        }
        return deletions + 1;
    }
};