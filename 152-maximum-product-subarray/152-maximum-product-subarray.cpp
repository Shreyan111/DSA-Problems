class Solution {
public:
// int maxProduct(vector<int>& nums) {
//     int n = nums.size();
//     int ans = nums[0];
 
//     for (int i = 0; i < n; i++)
//     {
//         int mul = nums[i];
//         for (int j = i + 1; j < n; j++)
//         {
//             ans = max(ans, mul);
//             mul = mul * nums[j];
//         }
//         ans = max(ans, mul);
//     }
//     return ans;
    
        int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
            
        int pro = 1;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]){
                pro = pro * nums[i];
                ans = max(ans,pro);
            }
            else{
                pro = 1;
                ans = max(ans,0);
            }  
        }
        pro = 1;
        for(int i = n-1 ; i >= 0 ; i--){
            if(nums[i]){
                pro = pro * nums[i];
                ans = max(ans,pro);
            }else{
                pro = 1;
                ans = max(ans,0);
            }
        }
        return ans;
    }
};