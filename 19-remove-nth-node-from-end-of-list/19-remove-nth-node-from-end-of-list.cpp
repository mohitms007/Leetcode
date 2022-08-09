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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyNode = new ListNode();
        dummyNode->next = head;
        
        ListNode* left = dummyNode;
        ListNode* right = head;
        
        while(n > 0 && right != NULL){
            right = right->next;
            n--;
        }

        while(right != NULL) {
            left = left->next;
            right = right->next;
        }
        
        // Now we have left which is on the left from node we need to delete
        left->next = left->next->next;
        
        return dummyNode->next;
        
    }
};