class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int >v;
        int arr[1001]={0};
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i].size(); j++){
                arr[nums[i][j]] = arr[nums[i][j]] + 1;
            }
        }
        
        for(int i = 0; i < 1001; i++){
            if(arr[i] == nums.size()){
                v.push_back(i);
             }
         }
        sort(v.begin(),v.end());
        return v;
    }
};