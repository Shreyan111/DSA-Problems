class Solution {
public:
    int lastRemaining(int n) {
        int ans = 1;
        int step = 1;
        int rem = n;
        bool left = 1;
        while(rem > 1)
        {
            if(left || rem & 1){
                ans = ans + step;
            }
            rem = rem / 2;
            step = step * 2;
            left = 1 - left;
        }
    return ans;
    }
};