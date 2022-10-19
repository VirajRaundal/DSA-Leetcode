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
        if(!head) return head;
        
        Node* curr = head;
        
        while(curr){
            Node* temp = curr->next;
            curr->next = new Node(curr->val);
            curr->next->next = temp;
            curr=temp;
        }
        
        curr = head;
        
        while(curr){
            if(curr->next != NULL)
                curr->next->random = (curr->random != NULL) ? curr->random->next: NULL;
            
            curr = curr->next->next;
        }
        
        Node* ori = head;
        Node* copy = head->next;
        Node* temp = copy;
        
        while(ori){
            ori->next = ori->next->next;
            if (copy->next != NULL) copy->next = copy->next->next;
            ori = ori->next;
            copy = copy->next;
        }
        
        return temp;
    }
};