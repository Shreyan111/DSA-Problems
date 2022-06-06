class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         if (nums.size() == 0){
//             return false;
//         }
   
//         int l = nums.size();
        
//         for (int i=0; i<l; i++) {
//             for (int j=i+1; j<l; j++) {
//                 if (nums[i] == nums[j]) {
//                     return true;
//                 }
//             }
//         }
//    return false;
        
        sort(begin(nums), end(nums));
        
        for (int i = 1; i < nums.size(); ++ i) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;
    }
};