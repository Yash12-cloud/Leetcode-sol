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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            size++;
            temp = temp->next;
        }
        temp = head;
        int idx = size/2;
       
       for(int i = 1;i<=idx;i++){
        temp = temp->next;
       }
       return temp;
    }
};