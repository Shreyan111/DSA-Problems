class KthLargest {
public:
    priority_queue <int, vector<int>, greater<int>> pq;
    int high;
    KthLargest(int k, vector<int>& nums) {
        high = k;
        for(auto i : nums){
            pq.push(i);
            if(pq.size() > high) pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > high) pq.pop();
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */