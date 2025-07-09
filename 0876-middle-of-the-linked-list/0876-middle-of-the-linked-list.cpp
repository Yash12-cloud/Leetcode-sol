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





    //     int size = 0;
    //     ListNode* temp = head;
    //     while(temp != NULL){
    //         size++;
    //         temp = temp->next;
    //     }
    //     temp = head;
    //     int idx = size/2;
       
    //    for(int i = 1;i<=idx;i++){
    //     temp = temp->next;
    //    }
    //    return temp;
     }
};