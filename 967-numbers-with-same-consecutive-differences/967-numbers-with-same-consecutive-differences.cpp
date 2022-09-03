class Solution {
public:
    void dfs(int digit, int num, int n, int k, vector<int>& output){
        if(n == 0) {
            output.push_back(num);
            return;
        }
        //for the first and the last digit as they are same
        if(digit - k >= 0){
            dfs(digit - k, (num * 10) + (digit - k), n - 1, k, output);
        }
        //for the middle digit as a value smaller than 7 will be used for it
        if(digit + k <= 9 && k){
            dfs(digit + k, (num * 10) + (digit + k), n - 1, k, output);
        }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> output;
        for(int i = 1; i <= 9; i++){
            dfs(i, i, n - 1, k, output);
        }
        return output;
    }
};