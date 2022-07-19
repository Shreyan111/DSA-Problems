/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set <ListNode*> hash; //stores the address of each node
        
        ListNode* curr = headA;
        while(curr != NULL){
            hash.insert(curr);
            curr = curr -> next;
        }
        
        curr = headB;
        while(curr != NULL){
            if(hash.find(curr) != hash.end())
                return curr;
            curr= curr -> next;
        }
        return curr;
    }
};