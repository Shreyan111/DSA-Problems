class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n  = cardPoints.size();
        int sum = 0;
        int ans;
        for(int i = 0; i < k; i++){
            sum = sum + cardPoints[i];
        }
        ans = sum;
        for(int i = 0; i < k; i++){
            sum = sum - cardPoints[k - 1 - i];
            sum = sum + cardPoints[n - 1 - i];
            ans = max(ans, sum);
        }
        return ans;
    }
};