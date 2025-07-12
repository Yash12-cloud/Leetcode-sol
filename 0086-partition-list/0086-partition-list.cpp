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
                tempA->next = NULL;//tempA low ka last node pa aajayga
            }
            else{
                tempB->next = temp;
                temp = temp->next;
                tempB = tempB->next;
                tempB->next = NULL;//tempB high ke last node pa aajayga
            }
        }
        //connecting last node of low to second node of high skipping high->val == 0
        tempA->next = high->next;
        ListNode* C = low->next;
        delete low;
        delete high;

        //returning 2nd node of low as we use dummy node
        return C;

    }
};