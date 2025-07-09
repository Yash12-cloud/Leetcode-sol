
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA;
        ListNode* b = headB;
        int lenA = 0;
        int lenB = 0;

        bool say = false;

        while(a != NULL){
            lenA++;
            a = a->next;
        }

        while(b != NULL){
            lenB++;
            b = b->next;
        }

        a = headA;
        b = headB;
        
        for(int i = 1; i <= abs(lenA-lenB);i++){
            if(lenA>lenB) a = a->next;
            else b = b->next;
        }

        while(a != NULL){
            if(a==b){
                say = true;
                break;
            }
            b =b -> next;
            a =a -> next;
        }
        if(say == true) return a;
        else return NULL;
        
        
        
        
        
        
        
        // bool say = false;

        // while(a != NULL){
        //     b = headB;
        //     while(b != NULL){
        //         if(b == a){
        //             say = true;
        //             break;
        //         }
        //         b = b->next;
        //     }
        //     if(b==a) break;
        //     a = a->next;
        // }   
        // if(say == true) return a;
        // else return NULL;
    }
};