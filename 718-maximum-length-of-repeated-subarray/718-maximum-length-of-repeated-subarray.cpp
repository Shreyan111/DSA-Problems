class Solution {
public:
 int solve(vector<int>& nums1, vector<int>& nums2){
     int n = nums1.size();
     int m = nums2.size();
     int len = 0;
     int ans = 0;
     int i, j;
     for(i = 0; i < n; i++){
         for(j = 0; j < m;){
             int k = i;
             if(nums1[i] == nums2[j]){
                 while(k < n && j < m && nums1[k] == nums2[j]){
                     k++;
                     len++;
                     j++;
                 }
             }
             else{
                 j++;
             }
             ans = max(len, ans);
             len = 0;
            }    
        }
        return ans;
    }
    
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        return max(solve(nums1, nums2), solve(nums2, nums1));
    }
};