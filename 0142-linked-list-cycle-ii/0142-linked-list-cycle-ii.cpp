/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next) return NULL;
        
        ListNode *fast = head;
        ListNode *slow = head;
        ListNode *find = head;
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow==fast){
                while(slow!=find){
                    slow = slow->next;
                    find = find->next;
                }
                return find;
            }
        }
        
        return NULL;
        
    }
};