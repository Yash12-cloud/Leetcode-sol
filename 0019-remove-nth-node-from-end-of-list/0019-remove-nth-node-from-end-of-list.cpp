class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        if(n==size){
            head = head->next;
            return head;
        }
        int idx = size - n;
        temp = head;
        for(int i = 1 ; i <= idx-1 ; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;

        return head;
    }
};