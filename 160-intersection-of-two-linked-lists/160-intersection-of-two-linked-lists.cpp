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
        set <ListNode*> hash;
        
        ListNode* curr = headA;
        while(curr){
            hash.insert(curr);
            curr = curr -> next;
        }
        
        curr = headB;
        while(curr){
            if(hash.find(curr) != hash.end())
                return curr;
            curr= curr -> next;
        }
        return curr;
    }
};