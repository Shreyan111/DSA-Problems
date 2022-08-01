class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> temp = nums;
        vector<int> op;
        stack<int> st;
        for(int i:nums)
            temp.push_back(i);
        
        for(int i = temp.size() - 1; i >= 0; i--){
            while(!st.empty() && st.top() <= temp[i])
                st.pop();
            if(st.empty())
                op.push_back(-1); 
            else
                op.push_back(st.top());
            st.push(temp[i]);
        }
        reverse(op.begin(), op.end());
        op.resize(op.size()/2);
        return op;
    }
};