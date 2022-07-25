class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend()); //reverse sort
        int res = 0;
        
        for(int i = 0; i < citations.size(); i++){
            if(citations[i] >= i + 1){
                res = i + 1;
            }
        }
        return res;
    }
};