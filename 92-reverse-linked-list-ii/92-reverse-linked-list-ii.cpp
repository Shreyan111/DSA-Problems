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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(left == right)
            return head;
        
        ListNode* temp = head;
        ListNode* start = NULL;
        stack<ListNode*> stack;
        
        for(int i = 0; i < left - 1; i++)
        {
            start = temp;
            temp = temp -> next;
        }
        
        for(int i = 0; i < right - left; i++)
        {
            stack.push(temp);
            temp = temp -> next;
        }
        stack.push(temp);
        
        ListNode* end = temp -> next;
        
        while(!stack.empty())
        { 
            if(start == NULL){
                start = stack.top();
                head = start;
            }
            
            else{
                start -> next = stack.top();
                start = start -> next;
            }
            
            stack.pop();
        }
        start -> next = end;
        return head;
    }
};