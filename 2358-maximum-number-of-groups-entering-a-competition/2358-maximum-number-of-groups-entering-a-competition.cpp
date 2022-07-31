class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        //sort grades
        sort(grades.begin(), grades.end());
        int k = 1; 
        int n = grades.size();
        int count = 0;
        while(n > 0){
            //math approach
            n = n - k;
            count++;
            k++;
            if(k > n){
                break;
            }
        }
        return count;
    }
};