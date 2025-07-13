class Solution {
public:
     ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
    return slow;
    }
    ListNode* reverseList(ListNode* head) {
        //Method 1 - Iteration Method
        ListNode* prev = NULL;
        ListNode* Next = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        
        ListNode* mid = middleNode(head);
        ListNode* c = reverseList(mid->next);
        mid->next = NULL;

        ListNode* a = head;
        ListNode* temp = head;

        ListNode* b = c;

        while(b != NULL && a != NULL){
            temp = a->next;
            a->next = b;
            a = temp;
            b = c->next;
            c->next = a;
            c = b;
        }
        
    }
};