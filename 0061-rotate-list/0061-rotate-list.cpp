class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        int size = 1;
        if(head == NULL) return head;
        while(tail->next != NULL){
            size++;
            tail = tail->next;
        }

        k = k % size;
        if(k == 0) return head;
        tail->next = head;

        ListNode* temp = head;
        //place temp at (n-k) posn
        for(int i = 1;i<size-k;i++){
            temp = temp->next;
        }
        head = temp->next;
        temp->next =NULL;

        return head;
    }
};