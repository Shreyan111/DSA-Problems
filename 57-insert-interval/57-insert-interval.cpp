class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.insert(lower_bound(intervals.begin(), intervals.end(), newInterval), newInterval);
        
        int i = 0;
        for(int j = 1; j < intervals.size(); j++){
            if(intervals[i][1] >= intervals[j][0]){
                intervals[i][1] = max(intervals[i][1], intervals[j][1]);
            }
            
            else{
                i++;
                intervals[i] = intervals[j];
            }
        }
        intervals.erase(intervals.begin() + i + 1, intervals.end());
        return intervals;
    }
};