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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        
        ListNode* previous = head; 
        ListNode* current = head -> next;
        
        while(current != NULL){
            if(current -> val == previous -> val){
                ListNode* temp = current -> next; //assign temp value as next of current
                previous -> next = current->next; //cut the link between duplicates and make link between first 1 and 2 
                delete current;
                current = temp; //current will be temp value now i.e. 2
            }
            else{
                previous = current;
                current = current -> next;
            }
        }
        return head;
    }
};