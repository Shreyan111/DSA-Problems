class Solution {
    public:
    // int trap(vector < int > & arr) {
    //     int n = arr.size();
    //     int waterTrapped = 0;
    //     for (int i = 0; i < n; i++) {
    //         int j = i;
    //         int leftMax = 0, rightMax = 0;
    //         while (j >= 0) {
    //             leftMax = max(leftMax, arr[j]);
    //             j--;
    //         }
    //         j = i;
    //         while (j < n) {
    //             rightMax = max(rightMax, arr[j]);
    //             j++;
    //         }
    //         waterTrapped += min(leftMax, rightMax) - arr[i];
    //     }
    //     return waterTrapped;
    // }
    
    int trap(vector < int > & height) {
        int n = height.size();
        int left = 0, right = n - 1;
        int res = 0;
        int maxLeft = 0, maxRight = 0;
        while (left < right) {
            if (height[left] <= height[right]) {
                if (height[left] >= maxLeft) {
                    maxLeft = height[left];
                } else {
                    res += maxLeft - height[left];
                }
                left++;
            } 
            
            else {
                if (height[right] >= maxRight) {
                    maxRight = height[right];
                } else {
                    res += maxRight - height[right];
                }   
                right--;
            }
        }
        return res;
    }
};