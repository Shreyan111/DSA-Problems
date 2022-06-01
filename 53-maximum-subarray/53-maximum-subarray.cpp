class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
//         int maxSum = INT_MIN;
        
//         for (int i = 0; i <= n - 1; i++) {
//             int currSum = 0;
//             for (int j = i; j <= n - 1; j++) {
//                 currSum += nums[j];
//                 if (currSum > maxSum) {
//                     maxSum = currSum;
//                 }
//             }
//         }
        
//         return maxSum;
        
        
        int maxSum = INT_MIN, 
        currSum = 0;
        
        for (int i = 0; i < n; i++){
            
        currSum = currSum + nums[i];
            
            if(currSum>maxSum) maxSum=currSum;
            if(currSum<0) currSum = 0;
            
        }
        
    return maxSum;
        
    }
};