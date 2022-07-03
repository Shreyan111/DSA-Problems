class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        while(r >= l)
        {
            int mid = l + (r-l)/2; //for finding mid in binary search
            if(nums[mid] == target)
                return mid;
            
            if(nums[l] <= nums[mid]) //to find if left part of array is sorted or not
            {
                if(target >= nums[l] && target <= nums[mid])
                    r = mid - 1;
                else
                   l = mid + 1;          
            }
            
            else
            {
                if(target >= nums[mid] && target <= nums[r])
                    l = mid + 1; 
                else
                    r = mid - 1;
            }     
        }
        return -1;
    }
};