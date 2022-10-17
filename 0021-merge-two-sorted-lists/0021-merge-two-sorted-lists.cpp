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
        //iterative in place
        
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        if(list1->val > list2->val) std::swap(list1,list2);
        
        ListNode* res = list1; //Declaring the head of the list.
        
        while(list1 != NULL && list2 != NULL){
            ListNode* temp = NULL; //Temporary node to traverse through the lists.
            
            while(list1 != NULL && list1->val <= list2->val){
                temp = list1;
                list1 = list1->next;
            }
            
            temp->next = list2;
            std::swap(list1,list2);
        }
        
        return res; //Returning the head of the list.
    }
};