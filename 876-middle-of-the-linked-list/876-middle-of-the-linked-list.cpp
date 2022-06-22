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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow;
        ListNode* fast;
        
        slow = fast = head;
        
        if(head == nullptr)
            return nullptr;
        
        if(head->next == nullptr)
            return head;
        
        
        while(fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
    //         ListNode* middleNode(ListNode* head) {
    //     auto slow = head, fast = head;
    //     while(fast && fast -> next) 
    //         slow = slow -> next,                                  // slow moves at 1 node / iteration
    //         fast = fast -> next -> next;                          // fast moves 2 nodes / iteration
    //     return slow;                                              // slow ends up at mid
    // }

        return slow;
    }
};