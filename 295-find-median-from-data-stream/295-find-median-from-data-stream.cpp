class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>> large; //min heap 
    priority_queue<int> small; //max heap
    
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(small.empty() || small.top() > num) {
            small.push(num);
        }
        else {
            large.push(num);
        }
        
        if(small.size() > large.size() + 1){
            int val = small.top();
            large.push(val);
            small.pop();
        }
        
        else if(large.size() > small.size() + 1){
            int val = large.top();
            small.push(val);
            large.pop();
        }
    }
    
    double findMedian() {
        if(small.size() > large.size()){
            return small.top();
        }
        if(large.size() > small.size()){
            return large.top();
        }
        return (large.top() + small.top()) / 2.0;
    }
};