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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* low = new ListNode(0);
        ListNode* tempA = low;
        ListNode* high = new ListNode(0);
        ListNode* tempB = high;

        ListNode* temp = head;
        while(temp != NULL){
            if(temp->val < x){
                tempA->next = temp;
                temp = temp->next;
                tempA = tempA->next;
                tempA->next = NULL;
            }
            else{
                tempB->next = temp;
                temp = temp->next;
                tempB = tempB->next;
                tempB->next = NULL;
            }
        }
        tempA->next = high->next;

        return low->next;

    }
};