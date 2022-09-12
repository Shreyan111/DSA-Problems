class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        int ans = 0;
        sort(tokens.begin(), tokens.end());
        
        for(int i = 0, j = tokens.size() - 1; i <= j; ){
            if(tokens[i] <= power){
                power = power - tokens[i];
                i++;
                score++;
                ans = max(ans, score);
            }
            else if(score > 0){
                power = power + tokens[j];
                j--;
                score--;
                ans = max(ans, score);
            }
            else{
                break;
            }
        }
        return ans;
    }
};