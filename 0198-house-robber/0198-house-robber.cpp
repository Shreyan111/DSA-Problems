class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 0){  
            return 0;
        }
        else if(n == 1){ 
            return nums[0];
        }
        else if(n==2){ 
            return max(nums[0], nums[1]);
        }
        int ans = 0;
        int val1 = nums[0];
        int val2 = max(nums[0], nums[1]);
        
        for(int i = 2; i < n; i++){
            ans = max(nums[i] + val1, val2);
            val1 = val2;
            val2 = ans;
        }
    return ans;
    }
};