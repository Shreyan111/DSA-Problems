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
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode*> firstList, secondList;
        while(l1){
            firstList.push(l1);
            l1 = l1 -> next;
        }
        while(l2){
            secondList.push(l2);
            l2 = l2 -> next;
        }
        
        int carry = 0;
        ListNode* nextNode = NULL;
        
        while(!firstList.empty() || !secondList.empty() || carry){
            int a = 0, b = 0;
            if(!firstList.empty()){
                a = firstList.top() -> val;
                firstList.pop();
            }
            if(!secondList.empty()){
                b = secondList.top() -> val;
                secondList.pop();
            }
            
            int sum = a + b + carry;
            
            int nodeVal = sum % 10;
            carry = sum/10;
            
            ListNode* newNode = new ListNode(nodeVal);
            newNode -> next = nextNode;
            nextNode = newNode;
        }
        
        return nextNode;
    }
};