class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = INT_MAX;
        while(j < arr.size()){
            if(sum < target){
                sum = sum + arr[j];
            }
            if(sum >= target){
                while(i <= j && sum >= target){
                    sum = sum - arr[i];
                    ans = min(ans, j - i + 1);
                    i++;
                }
            }
            j++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};