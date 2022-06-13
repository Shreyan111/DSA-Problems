class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count = 0;
//         int i, j, mul;
//         int n = nums.size();
 
//         for (i = 0; i < n; i++) {
//             if (nums[i] < k)
//                 count++;
            
//             mul = nums[i];
 
//             for (j = i + 1; j < n; j++) {
//                 mul = mul * nums[j];
//                 if (mul < k)
//                     count++;
//                 else
//                     break;
//             }
//         }
//     return count;
        
        int n = nums.size();
        int p = 1;
        int res = 0;
        
        for (int start = 0, end = 0; end < n; end++) {
            p = p * nums[end];
            
            while (start < end && p >= k)
                p = p / nums[start++];
 
            if (p < k) {
                int len = end - start + 1;
            res = res + len;
        }
    }
    return res;
    }
};