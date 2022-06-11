class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int arr[9000000] = { 0 };
        int a;
        int ans;
        
        for(int i = 0; i < n; i++){
            a = nums[i];
            arr[a - 1]++;
        }
        
        for(int j = 0; j < n-1; j++){
            if(arr[j] > 1){
                ans = j + 1;
            }
        }
        return ans;
    }
};