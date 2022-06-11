class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = x ^ y;
        int setBits = 0;
 
        while (ans > 0) {
            setBits += ans & 1;
            ans >>= 1;
        }
        return setBits;
    }
};