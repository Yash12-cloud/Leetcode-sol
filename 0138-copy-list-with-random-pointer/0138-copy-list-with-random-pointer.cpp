/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(0);
        Node* tempd = dummy;
        while(temp){
            tempd->next = new Node(temp->val);
            tempd = tempd->next;
            temp = temp->next;
        }


        unordered_map<Node*,Node*> m;
        temp = head;
        tempd = dummy->next;

        while(temp){
            m[temp] = tempd;
            temp = temp ->next;
            tempd = tempd ->next;
        }

        for(auto x : m){
            Node* orignal = x.first;
            Node* duplicate = x.second;
            if(orignal->random != NULL)
            duplicate->random = m[orignal->random];
        }
        return dummy->next;
    }
};