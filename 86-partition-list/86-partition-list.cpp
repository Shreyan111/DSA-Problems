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
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy1 = new ListNode();
        ListNode* dummy2 = new ListNode();
        
        ListNode* start = dummy1;
        ListNode* start2 = dummy2;
        
        while(head != NULL){
            if(head -> val < x){
                dummy1 -> next = head;
                dummy1 = head;
            }
            else{
                dummy2 -> next = head;
                dummy2 = head;
            }
            
            head = head -> next;
        }
        
        dummy2 -> next = NULL;
        dummy1 -> next = start2 -> next; //combining the 2 linked lists
        
        return start -> next;
    }
};