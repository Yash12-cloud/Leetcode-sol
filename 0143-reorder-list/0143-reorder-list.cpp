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
        ListNode* tempB = reverseList(mid->next);
        mid->next = NULL;

        ListNode* a = head;
        ListNode* tempA = head;

        ListNode* b = tempB;

        while(b){
            tempA = a->next;//tempA ko samne kro
            a->next = b;//a ko b sa connect kro
            a = tempA;//a ko tempA pa lao
            b = tempB->next;//b ko samne kro 
            tempB->next = a;//tempB ko a sa connect kro
            tempB = b;//tempB ko b pa lao
        }
    }
};