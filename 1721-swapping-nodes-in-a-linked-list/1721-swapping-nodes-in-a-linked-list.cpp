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
    ListNode* swapNodes(ListNode* head, int k) {
        int count=0;
        
        for(ListNode* temp = head; temp != NULL; temp = temp->next){
            count++;
        }
        cout<<count<<endl;
        
        ListNode* last = head;
        for(int i=1; i<=count-k; i++){
            last = last->next;
        }
        
        ListNode* start = head;
        for(int i=1; i<=k-1; i++){
            start = start->next;
        }
        // cout<<start->val<<" - "<<last->val<<endl;
        
        swap(start->val, last->val);
        
        
        return head;
    }
};