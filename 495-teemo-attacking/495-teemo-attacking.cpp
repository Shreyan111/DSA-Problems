class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int poison = 0;
        poison = duration;
        
        for(int i = 1; i < timeSeries.size(); i++){
            poison = poison + duration;
            if(timeSeries[i - 1] + duration > timeSeries[i]){
                poison = poison - (duration - (timeSeries[i] - timeSeries[i - 1]));
            }
        }
        
        return poison;        
    }
};