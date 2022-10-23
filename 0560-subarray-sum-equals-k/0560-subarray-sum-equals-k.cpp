class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> maps;
        
        int sum = 0;
        int count = 0;
        
        maps[sum] = 1;
        
        for(int i = 0; i < nums.size(); i++){
            sum = sum + nums[i];
            
            if(maps.find(sum - k) != maps.end()){
                count = count + maps[sum - k];
            }
            
            maps[sum]++;
        }
        
        return count;
    }
};