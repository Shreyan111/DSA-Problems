class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    int len;
        
    vector<vector<int>> subsets(vector<int>& nums) {
        len = nums.size(); //3
        get(0, nums); 
        return ans;
    }
    
    void get(int i, vector<int>& nums){
        if(i == len){
            ans.push_back(temp);
            return;
        }
        
        get(i + 1, nums); 
        temp.push_back(nums[i]);
        get(i + 1, nums);
        temp.pop_back();   
    }
};