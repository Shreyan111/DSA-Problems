class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        int i=0;
        int n=nums.size();
    
        while(i < n)
        {
            int a;
            int b;
            a = nums[i]; 
            
            while(i + 1 < n && nums[i+1] == nums[i]+1){
                i++;
            }
        
            b = nums[i];

            if(a == b)
                res.push_back(to_string(a));
            else
                res.push_back(to_string(a) + "->" + to_string(b));
            
            i++;
        }
        
        return res;
    }
};