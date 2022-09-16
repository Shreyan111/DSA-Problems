class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue <long long int, vector<long long int>, greater<long long int>> pq;
        pq.push(1);
        for(int i = 0; i < n - 1; i++){
            long long int top = pq.top();
            pq.pop();
            
            while(pq.size() > 0 && pq.top() == top){
                pq.pop();
            }
            
            pq.push(top * 2);
            pq.push(top * 3);
            pq.push(top * 5);
        }
        return pq.top();
    }
};