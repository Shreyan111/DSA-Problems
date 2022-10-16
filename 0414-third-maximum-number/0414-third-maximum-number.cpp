class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> ans; //set keeps distinct element
        for(int i = 0;i < nums.size(); i++){
            ans.insert(nums[i]);
        }
        nums.clear();
        for(auto i:ans){
            nums.push_back(i);
        }
        if(nums.size() < 3){
            return nums[nums.size() - 1];
        }
    return nums[nums.size() - 3];
    }
};