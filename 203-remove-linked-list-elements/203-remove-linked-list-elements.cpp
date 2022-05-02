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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)return NULL;
        ListNode *prev = NULL;
        ListNode *temp = head;
        while(temp!=NULL){
            if(temp==head && temp->val==val){
                ListNode *store = head;
                head = head->next;
                delete store;
                temp = head;
                
            }
            else{
                if(temp->val == val){
                    ListNode *store1 = temp;
                    prev->next = temp->next;
                    delete store1;
                    temp = prev->next;
                    
                }
                else{
                    prev = temp;
                    temp= temp->next;
                }
            }
        }
        return head;
    }
};