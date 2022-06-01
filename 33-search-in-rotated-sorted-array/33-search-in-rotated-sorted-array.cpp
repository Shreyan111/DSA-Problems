class Solution {
public:
    int binarySearch(vector<int>& nums, int low,
                 int high, int key)
{
    if (high < low)
        return -1;
 
    int mid = (low + high) / 2; 
    if (key == nums[mid])
        return mid;
 
    if (key > nums[mid])
        return binarySearch(nums, (mid + 1), high, key);
 
    // else
    return binarySearch(nums, low, (mid - 1), key);
}
    
    int findPivot(vector<int>& nums, int low, int high){

    if (high < low)
        return -1;
        
    if (high == low)
        return low;
 
    int mid = (low + high) / 2;
    if (mid < high && nums[mid] > nums[mid + 1])
        return mid;
 
    if (mid > low && nums[mid] < nums[mid - 1])
        return (mid - 1);
 
    if (nums[low] >= nums[mid])
        return findPivot(nums, low, mid - 1);
 
    return findPivot(nums, mid + 1, high);
    }
    
    
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int pivot = findPivot(nums, 0, n - 1);
        int key = target;
        
        if (pivot == -1)
            return binarySearch(nums, 0, n - 1, key);
        
        if (nums[pivot] == key)
            return pivot;
 
        if (nums[0] <= key)
            return binarySearch(nums, 0, pivot - 1, key);
 
    return binarySearch(nums, pivot + 1, n - 1, key);
        
    }
};