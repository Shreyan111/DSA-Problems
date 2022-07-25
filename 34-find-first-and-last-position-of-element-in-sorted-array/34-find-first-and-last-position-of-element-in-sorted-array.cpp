class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = -1, b = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(nums[i] == target){
                a = i;
                break;
            }
        }
    
        for(int j = n - 1; j > 0; j--){
            if(nums[j] == target){
                b = j;
                break;
            }
        }
    
        if(a == -1){
            b = -1;
        }
        return {a,b};
    }
};