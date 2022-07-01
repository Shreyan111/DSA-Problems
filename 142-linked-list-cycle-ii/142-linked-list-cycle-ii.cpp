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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, int> mapping;
        
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        
        ListNode* temp = head;
        int i = 1;
        while(temp != NULL){
            if(mapping[temp] != 0){
                return temp;
            }
            mapping[temp] = i++;
            temp = temp -> next;
        }
        return NULL;
    }
};