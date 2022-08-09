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
        ListNode* newHead = new ListNode();
        ListNode* sortHead = newHead;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        
        while(head1 != NULL && head2 != NULL) {
        
            if(head1->val < head2->val) {
               sortHead->next = head1;
                head1 = head1->next;
            }else{
                sortHead->next = head2;
                head2 = head2->next;
            }
            
            sortHead = sortHead->next;
        }
        
        
        if (head1!=NULL){
            sortHead->next = head1;
        
        }
        
          if(head2 != NULL){
            sortHead->next = head2;
        }
        
        
         return newHead->next;
        
        
    }
};