class MyCalendar {
public:
    map<int, int> slots;
    MyCalendar() {
    
    }
    
    bool book(int start, int end) {
        for(pair<int, int> p : slots) {
            if(max(p.first, start) < min(p.second, end))
                return false;
        }
        slots.insert({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */