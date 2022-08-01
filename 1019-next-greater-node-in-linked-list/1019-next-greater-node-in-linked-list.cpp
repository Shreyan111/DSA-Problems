/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        if(!head) 
            return {};
        
        vector<int> res;
        int index = 0;
        ListNode* curr = head;
        stack<pair<ListNode*, int>> st; //stack storing node and value and if node having a value is smaller than current value then update the next greater element in that index
        
        while(curr) {
            res.push_back(0); //default
            while(!st.empty() && st.top().first -> val < curr -> val) {
                int x = st.top().second;
                res[x] = curr -> val;
                st.pop();
            }
            
            st.push({curr, index});
            index++;
            curr = curr -> next;
        }
        return res;
    }
};