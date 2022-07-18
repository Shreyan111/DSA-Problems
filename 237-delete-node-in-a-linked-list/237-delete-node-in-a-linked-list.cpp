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
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val; //allot value of 5 as 1 in example 1
        node -> next = node -> next -> next;  //// connect new 1 with 9 and 5 got deleted and we broke link with previous 1
    }
};