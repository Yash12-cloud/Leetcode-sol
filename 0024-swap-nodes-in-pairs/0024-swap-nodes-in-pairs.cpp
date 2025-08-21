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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;

        ListNode* temp = new ListNode(0);

        while(b != NULL){
            temp->val = a->val;
            a->val = b->val;
            b->val = temp->val;
            if( b->next != NULL){
                a = a->next->next;
                b = b->next->next;
            }
            else break;
        }
        return head;
    }
};