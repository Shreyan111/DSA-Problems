class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int count = 0; //initialize count
        for(int i = 0; i < n; i++){
            while(i < n && nums[i] == 0){
                i++; //increment i if value is 0
            }
            if(i == n){
                break;
            }
            //in every operation taking the smallest value and decrement every other value with that smallest value and then increment the count
            int sum = nums[i];
            for(int j = 0; j < n; j++){
                if(nums[j] != 0){
                    nums[j] = nums[j] - sum;
                }
            }
            count++;
            sort(nums.begin(), nums.end());
        }
        return count;
    }
};