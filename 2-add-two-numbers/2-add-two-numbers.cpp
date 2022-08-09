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
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        
        int carry = 0;
        
        while(l1 != NULL || l2 != NULL || carry ) {
            int val1 = 0;
            if(l1 != NULL && l1->val != 0) {
                val1 = l1->val;
            }
            
            int val2 = 0;
            if(l2 != NULL && l2->val != 0) {
                val2 = l2->val;
            }
            
            
//             new digit
            
            int newVal = val1 + val2 + carry;
            carry = newVal/10;
            newVal = newVal % 10;
            
            curr->next = new ListNode(newVal);
            
            
            // Updating Pointers
            
            curr = curr->next;
            if(l1 != NULL) {
                l1 = l1->next;
            }
            if(l2 != NULL) {
                l2 = l2->next;
            }
            
            
        }
         return dummy->next;
    }
};