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
        
        ListNode* tempA = list1;
        ListNode* tempB = list2;
        
        ListNode* C = new ListNode(-1);
        ListNode* tempC = C;

        while(tempA != NULL && tempB != NULL ){
            if(tempA->val <= tempB->val){
                tempC->next = tempA;
                tempC = tempC->next;
                tempA = tempA->next;
            }
            else {
                 tempC->next = tempB;
                tempC = tempC->next;
                tempB = tempB->next;
            }
        }

        if(tempA == NULL){
            tempC->next = tempB;
        }

        if(tempB == NULL){
            tempC->next = tempA;
        }

        return C->next;
    }

    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

         while(fast->next != NULL && fast->next->next != NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }

    ListNode* middle(ListNode* head){
        if(head->next == NULL) return head;
        
        ListNode* mid = head;
        
        mid = middleNode(head);

        ListNode* head2 = mid->next;

        mid->next = NULL;

        ListNode* a = middle(head);
        ListNode* b = middle(head2);
        ListNode* C = mergeTwoLists(a,b);
        return C;
    }

    ListNode* sortList(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    return middle(head);
    }

};