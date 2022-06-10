class Solution {
public:
    
    struct {
        bool operator()(int a, int b) const
        {
            string value1 = to_string(a) + to_string(b);
            string value2 = to_string(b) + to_string(a);
            
            return value1 > value2;
        }
    } customCompare;
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), customCompare);
        
        if (nums[0] == 0){
            return "0";
        }
        
        string s;
        for (int &i: nums) {
            s += to_string(i);
        }
        return s;
    }
};