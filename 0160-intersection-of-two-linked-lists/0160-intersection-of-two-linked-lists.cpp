
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        ListNode* ans;
        bool say = false;

        while(a != NULL){
            b = headB;
            while(b != NULL){
                if(b == a){
                    ans = a;
                    say = true;
                    break;
                }
                b = b->next;
            }
            if(b==a) break;
            a = a->next;
        }   
        if(say == true) return ans;
        else return NULL;
    }
};