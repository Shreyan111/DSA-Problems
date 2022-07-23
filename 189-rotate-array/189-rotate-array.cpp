class Solution {
public:
//     void rotate(vector<int>& nums, int k) {
//         int n = nums.size();
        
//         for(int j = 0; j < k; j++){
//             int temp = nums[0];
//             nums[0] = nums[n-1];
        
//             for(int i = 1; i < n; i++){
//                 int temp2 = nums[i];
//                 nums[i] = temp;
//                 temp = temp2;
//             }
//         }
//     }
    void rotate(vector<int>& nums, int k) {
        int count = k % nums.size();
        if(count == 0){
            return;
        }
        
        reverse(nums.begin(), nums.end() - count); //reverse the first part
        reverse(nums.end() - count, nums.end()); //reverse the second part
        reverse(nums.begin(), nums.end()); //reverse the whole array
        return;
    }
};