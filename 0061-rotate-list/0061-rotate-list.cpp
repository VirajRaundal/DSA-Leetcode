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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;
        
        //Finding length of the list.
        
        ListNode *curr = head;
        int len = 1;
        while(curr->next){
            len++;
            curr = curr->next;
        }
        
        curr->next = head; //Making the list circular.
        
        k = k%len;
        k = len-k;
        
        //Going to the end of the rotated list.
        while(k--) curr = curr->next;
        
        //Setting the end of the list.
        head=curr->next;
        curr->next = NULL;
        
        return head;
    }
};