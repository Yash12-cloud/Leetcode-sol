class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next != NULL && fast->next->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
    return slow;
    }
    ListNode* reverseList(ListNode* head) {
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
    bool isPalindrome(ListNode* head) {

        
        ListNode* mid = middleNode(head);
        ListNode* midNext = mid->next;
        ListNode* newhead = reverseList(midNext);
        mid->next = newhead;

        ListNode* a = head;
        ListNode* b = mid->next;;

        while( b != NULL){
            if(a->val != b->val) return false;
            a=a->next;
            b=b->next;
        }
        return true;    
    }
};