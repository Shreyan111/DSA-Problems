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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *h1, *h2;
        h1 = list1;
        h2 = list2;
        ListNode *dummy = new ListNode(-1);
        ListNode *dummyNode = dummy;
        
        while(h1 != NULL && h2 != NULL){
            if(h1 -> val <= h2 -> val){
                dummyNode -> next = h1;
                dummyNode = h1;
                h1 = h1 -> next;
            }
            else{
                dummyNode -> next = h2;
                dummyNode = h2;
                h2 = h2 -> next;
            }
            dummyNode -> next = NULL;
        }
        
        if(h1){
            dummyNode -> next = h1;
        }
        
        if(h2){
            dummyNode -> next = h2;
        }
        ListNode *head = dummy -> next;
        // dummy -> next =  NULL;
        // delete dummy;
        return head;
        
    }
};