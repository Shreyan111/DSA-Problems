class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int> val;
        
//         for(auto n=0; n < numbers.size(); n++){
//             for(auto m=n+1; m<numbers.size(); m++){
//                 if(numbers[n] + numbers[m] == target){
//                      val.push_back(n + 1);
//                      val.push_back(m + 1);
//                      break;
//                 }
//             }
//         }
//         return val;
        
        int start = 0;
        int end = numbers.size() - 1;
        
        while (start < end){
            if ((numbers[start] + numbers[end]) > target){
                end--;
            }
            else if ((numbers[start] + numbers[end]) < target){
                start++;
            }
            else{
                return {++start, ++end};
            }
        }
        
        return {};
    }
};