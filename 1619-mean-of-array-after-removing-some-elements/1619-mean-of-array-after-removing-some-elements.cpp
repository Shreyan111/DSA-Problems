class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        double ans;
        double sum = 0;
        sort(arr.begin(), arr.end());
        
        for(int i = n / 20; i < n - n / 20; i++){
            sum = sum + arr[i];
        }
        return sum / (n - n / 10);
    }
};