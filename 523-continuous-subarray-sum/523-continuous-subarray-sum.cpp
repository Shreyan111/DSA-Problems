class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        unordered_map<int, int> maps;
        
        maps[0] = -1;
        
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            sum = sum + nums[i];
            if(maps.find(sum % k) != maps.end()){
                if(i - maps[sum % k] >= 2){
                    return true;
                }
            }
            else{
                maps[sum % k] = i;
            }
        }
        return false;
    }
};