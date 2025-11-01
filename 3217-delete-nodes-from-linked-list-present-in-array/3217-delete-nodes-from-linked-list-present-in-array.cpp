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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> s;
        for(auto x : nums){
            s.insert(x);
        }

        ListNode* temp = head;
        while(temp != NULL){
            if(s.find(temp->val) != s.end()){
                head = head->next;
                temp = head;
                continue;
            }
            if(temp->next != NULL && s.find(temp->next->val) != s.end()){
                temp->next = temp->next->next;
                continue;
            }
            temp = temp->next;

        }
        return head;
    }
};