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
    ListNode* reverseList(ListNode* head) {
        ListNode* dummy = NULL; //giving dummy node value as null
        
        //iterative approach to check until head is null
        while(head != NULL){
            ListNode* next = head -> next; //assign head's next as next
            head -> next = dummy; //assigning new next value of head
            dummy = head; //newHead will be head
            head = next; //head will be next
        }
        return dummy;
    }
};