class NumArray {
public:
    vector<int> sum;
    
    NumArray(vector<int>& nums) {
        int prev = 0;
        sum.push_back(0);
        for(int i=0; i<nums.size(); i++)
        {
            prev = prev + nums[i]; //[0, -2, -2, 1, -4, -2, -3]
            sum.push_back(prev);
        }
    }

    int sumRange(int i, int j) {
        return sum[j+1]-sum[i]; 
        
        // Can't access nums array here so thats why manipulated the nums array at the top function so that new sum vector can be returned from here.
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */