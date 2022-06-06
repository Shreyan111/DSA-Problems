class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++)
        //     for(int j=i+1;j<nums.size() && j<=i+k;j++)
        //     {
        //         if(nums[i] == nums[j])
        //             return true;
        //     }
        // return false;
        
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++)
        {
            if(set.count(nums[i])) return true;
        
            set.insert(nums[i]);
            if(set.size()>k)
                set.erase(nums[i-k]);
        }
    return false;
    }
};