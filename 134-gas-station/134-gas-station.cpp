// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int sum = 0;
//         int total_sum = 0;
//         int ans = 0;
        
//         for(int i = 0; i < cost.size(); i++){
//             total_sum = total_sum + (gas[i] - cost[i]);
            
//             sum = sum + (gas[i] - cost[i]);
            
//             if(sum < 0){
//                 ans = i + 1;
//                 sum = 0;
//             }
//         }
//         if (total_sum >= 0){
//             return ans;
//         }
//         return -1;
//     }
// };

































class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0;
        int total_sum = 0;
        int ans = 0;
        
        for(int i = 0; i < cost.size(); i++){
            total_sum += (gas[i] - cost[i]);
            
            sum += (gas[i] - cost[i]);
            
            if(sum < 0){
                sum = 0;
                ans = i + 1;
            }
        }
        if(total_sum >= 0){
            return ans;
        }
        return -1;
    }
};