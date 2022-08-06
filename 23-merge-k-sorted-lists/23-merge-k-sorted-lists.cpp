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
   ListNode* merge2lists(ListNode* l1,ListNode* l2){
    //during merging or intially any of the list is null then return another
    //i.e l1 big l2 small or vice versa
    if(!l1){
        return l2;
    }
    if(!l2){
        return l1;
    }
    
    ListNode* head;
    if(l1 -> val <= l2 -> val){
        head = l1;
    }
    else{
        head = l2;
    }
    
    //now we have to merge the remaining elements in the linked lists
    if(l1 -> val <= l2 -> val){
        head -> next = merge2lists(l1 -> next, l2);
    }
    else{
        head -> next = merge2lists(l1, l2 -> next);
    }
    
    //at each call
    return head;
    
}
ListNode* mergeKLists(vector<ListNode*>& lists) {
 /*intution:-point to 1st list an then merge two lists baari baari se*/
    if(lists.size()==0){
        return NULL;
    }
     ListNode* head = lists[0];
    //our 1st list will always be lists[0].
    
    //after each loop head will be updated
     for(int i = 1; i < lists.size(); i++){
         head = merge2lists(head, lists[i]);
     }
    return head;
    }
};